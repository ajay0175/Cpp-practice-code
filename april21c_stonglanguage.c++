#include<bits/stdc++.h>
using  namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        char s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        int ans=0,b=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='*'){
                ans++;
                if(ans==k){
                    cout<<"yes"<<endl;
                    b++;
                    break;
                }

            }
            else{
                ans=0;
            }
            
        }
        if(b==0)
        cout<<"no"<<endl;

    
    }
    return 0;

}