#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
     float k1,k2,k3,v;
     cin>>k1>>k2>>k3>>v;
     float ans=100/(k1*k2*k3*v);
     float b=9.575;
     float a=ans;
      if(a>=b){
         cout<<"no"<<endl;
         cout<<" "<<a;
        }
        else {
         cout<<"yes"<<endl;
          cout<<" "<<a;
        }
    }

    return 0;
}