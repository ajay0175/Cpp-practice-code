#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,H,x;
    // N is different time zone
    // H is hour required to solve the problem
    // x is hour left for solving problem
    cin>>N>>H>>x;
    
    int flag=0;

    for(int i=0;i<N;i++){
        int T;//  T is a time zone
        cin>>T;
        int v=x+T;// v is value required to solve the problem
        if(H<=v){
            flag=1;
        }
    }  
    if(flag==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}