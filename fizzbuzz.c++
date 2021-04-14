#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%3==0 && i%5==0){
            cout<<"Fizzbuzz"<<endl;
        } else if(i%3==0){
            cout<<"Fizz"<<endl;
        } else if(i%5==0){
            cout<<"buzz"<<endl;
        } else {
            cout<<i<<endl;

        }
    }
    
    return 0;
}