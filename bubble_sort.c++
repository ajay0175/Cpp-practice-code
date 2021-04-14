#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int counter=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(counter<n-1){
        for(int i=0;i<n-counter-1;i++){
            if(a[i]>a[i+1]){
                int temp;
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        
        }counter++;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;

    return 0;
}