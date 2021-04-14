#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int n;
     vector<int> a(n);
      cin>>n;
    int temp= a[0];
    for(int i=0; i<n;i++){
     cin>>a[i];
        a[i]=a[i+1];
        a[n-1]=temp;}
   
    for(int i=0;i<n-1;i++){
        cout<<a[i]<<endl;
    }
    
return 0;
}