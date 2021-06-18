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


int32_t main() {

    fst

    #ifndef ONLINE_JUDGE
    freopen("INPUT.txt", "r", stdin);
    freopen("OUTPUT.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    while(t--){
        unsigned int n;
        cin>> n;
        int o = floor(log2(n)) + 1;
        unsigned int ans = ((1 << o) - 1) ^ n;
        cout<< ans;
    }
    return 0;
}