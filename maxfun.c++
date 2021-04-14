#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        int long sum=0;
        for(int i=0;i<n;i++){
              cin>>a[i];

        }
        sort(a,a+n);
        sum+=abs(a[0]-a[1])+abs(a[1]-a[n-1])+abs(a[n-1]-a[0]);
        cout<<sum<<endl;
            
    }
    
    
return 0;
}