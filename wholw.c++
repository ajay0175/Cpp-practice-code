#include <bits/stdc++.h>
using namespace std;
#define lln long long int

int main(){
int t;
cin>>t;
while(t--)
 {
    lln n,k;
    cin>>n>>k;
   if(k==0){
       cout<<n;

   }else{
       cout<<n%k<<'\n';
   }
    
 }
    
return 0;	
}
