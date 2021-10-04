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

int lvl[100001], parent[100001], subt[100001];
void dfs(int cur, int par, vector<vi> &adj) // dfs on tree
{
  cout << cur << ' ';
  parent[cur] = par;
  lvl[cur] = lvl[par] + 1;
  subt[cur] = 1;

  for(auto nb : adj[cur]){
    if(nb != par){
      dfs(nb, cur, adj), subt[cur] += subt[nb];
    }
  }
}

vi bfs(vector<vi> &adj, int n) // bfs on tre
{
  queue<int> q;
  vi par(n+1); // 0
  vi dist(n+1); // 0

  q.push(1);

  while(!q.empty()) // n
  {
    int cur = q.front();
    cout << cur << " ";

    q.pop();

    for(auto nb : adj[cur]) // deg(cur)
    {
      if(nb == par[cur])
        continue;

      q.push(nb);
      par[nb] = cur;
      dist[nb] = dist[cur] + 1; // distance from root 
    }
  }
  return dist;
}

//  To find path to any node
vi get_path(int i, vi &par)//pseudo code
{
  vi path;

  while(i > 0)
  {
    path.pb(i);
    i = par[i];
  }

  reverse(path.begin(), path.end());
  return path;
}
signed main() {

  io();
  int n , m;
  cin >> n >> m;
  // Input format adjacency list
  vector<vi> adj(n+1);

  while(m--)
  {
    int i, j; cin >> i >> j;
    adj[i].pb(j);
    adj[j].pb(i);
  }

  dfs(1, 0, adj);
  // vi d = bfs(adj, n);
  cout <<endl;

  // for(int i = 1; i <= n; i++)
  //   cout << i << ' ' << subt[i] <<endl;  

  // for(int i = 1; i <= n; i++)
  //   cout << i << ' ' << d[i] << endl; 
  
  return 0;
}