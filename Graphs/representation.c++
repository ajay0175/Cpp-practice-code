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
// Graph representation
signed main() {

  io();
  int n, m;
  cin >> n >> m;

  // Adjacency  matrix format

  vector<vi> adj_mat(n+1, vi(n+1));

  while(m--)
  {
    int i, j;
    cin >>i >> j;
    adj_mat[i][j] = adj_mat[j][i] = 1;
  }

  for(int i = 1; i < n+1; i++)
  {
    for(int j = 1; j < n+1; j++)
    {
      cout <<adj_mat[i][j] << " ";
    }
    cout << endl;
  }

  if(adj_mat[4][7])
  {
    cout << "yes";
  }
  else
  {
    cout <<"no";
  }

  // Adjacency list format
  vector<vi>adj_list(n+1);

  while(m--)
  {
    int i, j; 
    cin >> i >> j;
    adj_list[i].pb(j);
    adj_list[j].pb(i);
  }

  for(int i = 1; i < n+1; i++)
  {
    cout << i << "-> ";
    for(auto e : adj_list[i])
      cout << e << " ";
    cout <<endl;
  }

  return 0;
}
