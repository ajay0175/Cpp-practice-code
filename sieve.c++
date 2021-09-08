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
void sieve(int n){
  int prime[n+1] = {0};

  for(int i = 2; i <= n; i++){
    if(prime[i] == 0){
      for(int j = i*i; j <= n; j += i){
        prime[j] = 1;
      }
    }
  }

  for(int i = 2; i <= n; i++){
    if(prime[i] == 0){
      cout<< i <<" ";
    }
  }

  cout<<'\n';
}

void prime_factor(int n){
  int spf[n+1] = {0};

  for(int i = 2; i <= n; i++){
    spf[i] = i;
  }

  for(int i = 2; i <= n; i++){
    if(spf[i] == i){
      for(int j = i*i; j <= n; j += i){
        if(spf[j] == j){
          spf[j] = i;
        }
      }
    }
  }

  while(n != 1){
    cout<< spf[n] <<" ";
    n /= spf[n];
  }

}

signed main() {

  io();

  int n;
  cin>>n;

  // sieve(n);
  prime_factor(n);
  return 0;
}
