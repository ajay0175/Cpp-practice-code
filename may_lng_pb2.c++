// golf
#define lln  long long int
#include<bits/stdc++.h>
using  namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        lln N,x,k;
        cin>>N>>x>>k;
        N++;
        if (x%k==0){
            cout<<"YES"<<'\n';
        }else if((N-x)%k==0){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
    return 0;

}