#include<bits/stdc++.h>
using  namespace std;

#define int   long long
#define ms    multiset
#define pb    push_back
#define pob   pop_back
#define ff    first
#define ss    second
#define fst   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define MOD   1000000007

void io(){
   fst

//    #ifndef ONLINE_JUDGE
//    freopen("INPUT.txt", "r", stdin);
//    freopen("OUTPUT.txt", "w", stdout);
//    #endif
}

class Node{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        this -> data = val;
        this -> left = NULL;
        this -> right = NULL;
    }
};

void inOrder(Node *root) // left -> root -> right
{
    // base case
    if(root == NULL)
    {
        return;
    }

    inOrder(root -> left);
    cout << root ->data << " ";
    inOrder(root -> right);
}

void preOrder(Node *root) // node -> left -> right
{
    // base case
    if(root == NULL)
    {
        return;
    }
    
    cout << root ->data << " ";
    preOrder(root -> left);
    preOrder(root -> right);
}

void postOrder(Node *root) // left -> right -> node
{
    // base case
    if(root == NULL)
    {
        return;
    }
    
    postOrder(root -> left);
    postOrder(root -> right);
    cout << root ->data << " ";
}

void LevelOrder(Node *root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if(temp == NULL)
        {
            cout << endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp -> data << " ";

            if(temp -> left)
            {
                q.push(temp -> left);
            }


            if(temp -> right)
            {
                q.push(temp -> right);
            }
        }
    }
}

int Minval(Node *root)
{
    Node *temp = root;

    while(temp -> left != NULL)
    {
        temp = temp -> left;
    }

    return temp -> data;
}

int Maxval(Node *root)
{
    Node *temp = root;

    while(temp -> right != NULL)
    {
        temp = temp -> right;
    }

    return temp -> data;
}

void Predecessor_and_Successor(Node *&root, Node *&pred, Node *&succ, int key)
{
    if(root == NULL)
    {
        return;
    }

    if(root -> data == key)
    {
        if(root -> left != NULL)
        {
            Node *temp = root -> left;
            while (temp -> right)
            {
                temp = temp -> right;
            }
            pred = temp;

        }

        if(root -> right != NULL)
        {
            Node *temp = root -> right;
            while (temp -> left)
            {
                temp = temp -> left;
            }
            succ = temp;

        }

        return;
    }

    if(root -> data > key)
    {
        succ = root;
        Predecessor_and_Successor(root -> left, pred, succ, key);
    }
    else{
        pred = root;
        Predecessor_and_Successor(root -> right, pred, succ, key);
    }
    return;
}

Node *createBST(Node *root, int val) // Creation of a Binary Search Tree
{
    if(root == NULL)
    {
        root = new Node(val);
        return root;
    }

    if(root -> data < val)
    {
        root -> right = createBST(root -> right, val);
    }
    else{
        root -> left = createBST(root -> left, val);
    }

    return root;
}

Node *deleteFromBST(Node *root, int val)
{
    // base case
    if(root == NULL)
    {
        return root;
    }

    if(root -> data == val)
    {
        //Case1: 0 child
        if(root -> left == NULL and root -> right)
        {
            delete root;
            return NULL;
        }

        //Case2: 1 child

        //Case2(a) : left wala
        if(root -> left != NULL and root -> right == NULL)
        {
            Node *temp = root -> left;
            delete root;
            return temp;
        } 

        //Case2(b): right wala
        if(root -> left == NULL and root -> right != NULL)
        {
          Node *temp = root -> right;
          delete root;
          return temp;
        }

        //Case3: 2 child
        if(root -> left != NULL and root -> right != NULL)
        {
          int mini = Minval(root -> right);
          root -> data = mini;
          root -> right = deleteFromBST(root -> right, mini);
          return root;
        }
    }
    else if(root -> data > val)
    {
        root -> left = deleteFromBST(root -> left, val);
        return root;
    } 
    else{
        root -> right = deleteFromBST(root -> right, val);
        return root;
    }

}

void Takeinput(Node *&root) // Insertion of Binary Search Tree
{
    int data; 
    cin >> data;

    while(data != -1)
    {
        root = createBST(root, data);
        cin >> data;
    }
}

int32_t main() {
  io();
    Node *root = NULL;
    Node *pred = NULL, *succ = NULL;
    
    cout << "Enter the data for BST" << '\n';
    Takeinput(root);

    cout << "level order Traversal" << '\n';
    LevelOrder(root);

    cout << "Inorder Traversal" << '\n';
    inOrder(root);
    cout << '\n' << "Preorder Traversal" << '\n';
    preOrder(root);
    cout << '\n' << "PostOrder Traversal" << '\n';
    postOrder(root);

    cout << "\nMin val is " << Minval(root) << '\n';
    cout << "Max val is " << Maxval(root) << '\n';

    //After the Deletion
    root = deleteFromBST(root, 90);

    cout << "level order Traversal" << '\n';
    LevelOrder(root);

    cout << "Inorder Traversal" << '\n';
    inOrder(root);
    cout << '\n' << "Preorder Traversal" << '\n';
    preOrder(root);
    cout << '\n' << "PostOrder Traversal" << '\n';
    postOrder(root);

    cout << "\nMin val is " << Minval(root) << '\n';
    cout << "Max val is " << Maxval(root) << '\n';
    
    // Predecessor_and_Successor(root, pred, succ, 65);
    // cout << "Predecessor is " << pred -> data << endl;
    // cout << "Successor is " << succ -> data << endl;
   return 0;
}