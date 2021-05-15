//solubility
#include<bits/stdc++.h>
using  namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,a,b,sum=0, total;
        cin>>x>>a>>b;
        sum=a+(100-x)*b;
       // cout<<sum;
        total=sum*10;
        cout<<total<<'\n';
    }
    return 0;

}