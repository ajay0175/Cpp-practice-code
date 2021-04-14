#include<bits/stdc++.h>
using  namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int c;
        cin>>c;
        int temp=c;
        int i=0;
        while(temp>0){
            temp=temp/2;
            i++;

        }
        int a=pow(2,i-1)-1;
        int b= a^c;
        cout<<a*b<<endl;

    }
    return 0;

}