#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b , c;
    cin>>a>>b>>c;
    if(a==b || a==c){
        cout<<"yes";
    }else if(b==c  || b==a){
        cout<<"yes";
    }else if(c==a || c==b){
        cout<<"yes";
    }else{
        cout<<"no";
    }

    return 0;
}