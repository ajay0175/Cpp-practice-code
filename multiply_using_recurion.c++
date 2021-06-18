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
 
 
  //using recurion
    int mul(int a, int b) {
        if(a == 0 || b == 0) return 0;

        return (a + mul(a, b - 1));
    } 

    int multiply(int a, int b){
        int ans = mul(a, abs(b));
        return (b < 0) ? -ans : ans;
    }



int32_t main() {

    fst
    
    #ifndef ONLINE_JUDGE
    freopen("INPUT.txt", "r", stdin);
    freopen("OUTPUT.txt", "w", stdout);
    #endif



    int t=1;
    cin>>t;
    while(t--){
        int a, b ;
        cin>> a >> b;
        cout<< multiply(a, b)<< endl;
    }
    return 0;
}