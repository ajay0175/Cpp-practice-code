#include<bits/stdc++.h>
using  namespace std;

#define int   long long
#define vi    vector<int>
#define ms    multiset
#define pb    push_back
#define pob   pop_back
#define ff    first
#define ss    second
#define fst   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define inf   1e18
#define mod   1000000007

void io(){
     fst

    #ifndef ONLINE_JUDGE
      freopen("INPUT.txt", "r", stdin);
      freopen("OUTPUT.txt", "w", stdout);
    #endif
}

int pwmd(int a, int n)
{
    if (!n)
        return 1;
    int pt = pwmd(a, n / 2);
    pt *= pt, pt %= mod;
    if (n & 1)
        pt *= a, pt %= mod;
    return pt;
}

int mirror(int n){
    int x = n;
    int ans = 0;
    if(n < 10)
        ans = x;
    else if(n >= 10){
        n = n/10;
        while(n != 0)
            x *= 10 + n % 10;
            n /= 10;
        ans = x;
    }
    return ans;
}
   
int32_t main() {

   io();

   int a[100001] = {0};
   int prearray[100001] = {0};
   for(int i = 1; i <= 100001; i++){
    a[i] = mirror(i);
    prearray[i] = prearray[i-1] + a[i];
   }

    int q;
    cin>>q;
    while(q--){
        int l, r;
        cin>> l >> r;
        int d = prearray[r] - prearray[l];
        cout<<pwmd(a[l], d)<<'\n';
   }
   return 0;
}