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

int divisor(int n, int a, int b){
    int c1 = n/a;
    int c2 = n/b;
    int c3 = n/(a*b);
return c1 + c2 - c3;
}

int euclid_gcd(int a, int b){
    
    while (b != 0)
    {
      int rem = a % b;
      a = b;
      b = rem;
    }
    return a;
    
}

signed main() {

  io();

  int a, b;
  cin>> a >> b;

//   cout<< divisor(n, a, b);
  cout<< euclid_gcd( a, b);

  return 0;
}
