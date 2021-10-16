#include<bits/stdc++.h>
using  namespace std;

#define int         long long
#define vi          vector<int>
#define pii         vector<pair<int,int>>
#define ms          multiset
#define pb          push_back
#define pob         pop_back
#define ff          first
#define ss          second
#define endl        '\n'
#define stp(x)      fixed << setprecision(x)
#define fst         ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define inf         1e18
#define mod         1000000007

void io(){
  fst

  #ifndef ONLINE_JUDGE
    freopen("INPUT.txt", "r", stdin);
    freopen("OUTPUT.txt", "w", stdout);
  #endif
}

const int N = 1e5+2;
int a[N] , tree[4*N];

void build(int node, int start, int end)
{
  if(start == end)
  {
    tree[node] = a[start];
    return;
  }

  int mid = start + end >> 1; 
  build(2*node, start , mid);
  build(2*node+1, mid+1, end);

  tree[node] = tree[2*node] + tree[2*node+1];
}

signed main() {

  io();
  int n;
  cin >> n;

  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  build(1, 0, n-1);
  for(int i = 1; i < 17; i++)
  {
    cout << tree[i] << " ";
  }
  
  return 0;
}