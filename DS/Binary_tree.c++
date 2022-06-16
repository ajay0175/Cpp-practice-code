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

   #ifndef ONLINE_JUDGE
   freopen("INPUT.txt", "r", stdin);
   freopen("OUTPUT.txt", "w", stdout);
   #endif
}

class node
{
private:
    /* data */
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }

};

node *buildtree(node * root)
{
    int data;

    cout << "Enter the data" << '\n';
    cin >> data;
    root = new node(data);

    if(data == -1)
        return NULL;

    cout << "Enter data for inserting in left " << data << endl;
    root -> left = buildtree(root -> left);
    cout << "Enter data for inserting in right " << data << endl;
    root -> right = buildtree(root -> right);

    return root;

}

void LevelOrder(node *root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node *temp = q.front();
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

void inOrder(node *root) // left -> root -> right
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

void preOrder(node *root) // node -> left -> right
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

void postOrder(node *root) // left -> right -> node
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

void buildtree_from_levelOreder(node *&root)
{
    queue<node*> q;
    cout << "Enter the data for root" << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while (!q.empty())      
    {
        node *temp = q.front();
        q.pop();

        cout << "Enter the left node for: " << temp -> data << '\n';
        int leftdata;
        cin >> leftdata;

        if(leftdata != -1)
        {
            temp -> left = new node(leftdata);
            q.push(temp -> left);
        }

        cout << "Enter the right node for: " << temp -> data << '\n';
        int rightdata;
        cin >> rightdata;

        if(rightdata != -1)
        {
            temp -> right = new node(rightdata);
            q.push(temp -> right);
        }
    }
    
}



int32_t main() {
//   io();

// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    node *root = NULL;
    // root = buildtree(root);

    // cout << "Printing the level order traversal" << '\n';
    // LevelOrder(root);

    // cout << "Inorder Traversal" << endl;
    // inOrder(root);

    // cout << endl << "Preorder Traversal" << endl;
    // preOrder(root);
    
    // cout << endl << "Postorder Traversal" << endl;
    // postOrder(root);

    buildtree_from_levelOreder(root);
    LevelOrder(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

   return 0;
}