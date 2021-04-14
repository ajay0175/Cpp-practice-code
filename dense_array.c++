#include<bits/stdc++.h>
using namespace std;
 int arr[50];

int main()
{ 
    int t,n,count;
    cin>>t;
     
    while(t--) {
        cin>>n;
        count = 0;
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++){
            if (max(arr[i], arr[i + 1]) > 2 * min(arr[i], arr[i + 1])) {
                int mini = min(arr[i], arr[i+1]);
                int maxi = max(arr[i], arr[i+1]);
                while (2 * mini < maxi){
                    mini*=2;
                    count++;
                }   
            }
            
        }
        cout<<count<<endl;
    } 
   
}