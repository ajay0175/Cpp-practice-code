#include<bits/stdc++.h>
using  namespace std;
#define lln  long long int
#define mod   1000000007

    int result(lln a,lln b, lln p){
        lln temp=1;
        a=a%mod;
        if(a==0)
        return 0;
        while(b>0){
            if(b&1)               
            temp=(a*temp)%p;
            b=b>>1;
            a=(a*a)%p;
    
                 
        }
        return temp;
    
    }

int main(){


    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    // #ifndef ONLINE_JUDEGE
    // freopen("INPUT.txt", "r", stdin);
    // freopen("OUTPUT.txt", "w", stdout);
    // #endif

    int t;
    cin>>t;
    while(t--){

        lln N;
        cin>>N;
        lln ans=result(2,N-1,mod);
        cout<<ans<<'\n';
    }
    return 0;

}