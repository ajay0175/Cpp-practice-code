#include<bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using  namespace std;

#define int           long long
#define vi            vector<int>
#define vvi            vector<vector<int>>
#define vpii          vector<pair<int,int>>
#define pii           pair<int,int>
#define all(x)        x.begin(), x.end()
#define MAX(x)        *max_element(all(x))
#define MIN(x)        *min_element(all(x))
#define ms            multiset
#define pb            push_back
#define pob           pop_back
#define ff            first
#define ss            second
#define setbits(x)    __builtin_popcountll(x)
#define stp(x)        fixed << setprecision(x)
#define fast          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl          '\n'
#define inf           1e18
#define mod           1000000007

typedef tree<vpii, null_type, less<vpii>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> mpbds;

// find_by_order(K): Returns an iterator to the Kth largest element (counting from zero)
// order_of_key (K): Return the number of items that are strictly smaller than k

template<typename T_vector>
void output_vector(const T_vector &v, bool line_break = false, bool add_one = false, int start = -1, int end = -1) {
  if (start < 0) start = 0;
  if (end < 0) end = int32_t(v.size());
  for (int i = start; i < end; i++) {
    cout << v[i] + (add_one ? 1 : 0) << (line_break ? '\n' : i < end - 1 ? ' ' : '\n');
  }
}

void io(){
  fast

  #ifndef ONLINE_JUDGE
    freopen("INPUT.txt", "r", stdin);
    freopen("OUTPUT.txt", "w", stdout);
  #endif
}

struct Node {
  int id;
  vector<Node*> childList;
  Node *parent;
};

map<int, Node*> mapNode;

string TreeConstructor(string strArr[], int arrLength) {
  for (int i = 0; i < arrLength; i++) {
    int Node1, Node2;
    sscanf(strArr[i].c_str(), "(%d,%d)", &Node1, &Node2);

    if (mapNode.find(Node1) == mapNode.end()) {
      mapNode[Node1] = new Node;
    }

    if (mapNode.find(Node2) == mapNode.end()) {
      mapNode[Node2] = new Node;
    }

    Node* childNode = mapNode[Node1];
    Node* parentNode = mapNode[Node2];

    if (parentNode -> childList.size() >= 2) {
      return "false";
    }

    if (childNode -> parent and childNode -> parent != parentNode) {
      return "false";
    }

    childNode -> parent = parentNode;
    parentNode->childList.push_back(childNode);
  }

  int rootCount = 0;
  for (auto it = mapNode.begin(); it != mapNode.end(); it++) {
    if (it->second->parent == NULL) {
      rootCount++;
      if (rootCount > 1) {
        return "false";
      }
    }
  }

  return (rootCount == 1) ? "true" : "false";
}

void solve()
{
    string A[] = {"(1,2)", "(2,4)", "(5,7)", "(7,2)", "(9,5)"};
    int arrLength = sizeof(A) / sizeof(*A);
    cout << TreeConstructor(A, arrLength);
}

int32_t main() {

  io();

  int t = 1;
  cin>>t;
  while(t--){
    solve();  
  }
  return 0;
}

/*
    Company: Neebal
    Role: Fresher (Software Engineer)
    Level of question: Hard
*/