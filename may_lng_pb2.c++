// golf
#define lln  long long int
#include<bits/stdc++.h>
using  namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        lln N,x,k;
        cin>>N>>x>>k;
        if (x%k==0){
            cout<<"YES"<<'\n';
        }else{
            cout<<"NO"<<'\n';
        }
    }
    return 0;

}