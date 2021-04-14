#include<bits/stdc++.h>
using  namespace std;
#define lli   long long int


int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        lli ans=0;
        bool flag = false;
        for(lli i=0;i<s.size();i++){
            if(s[i]=='1'){
                if(flag==false){
                    flag=true;
                }
            }else{
                if(flag==true){
                    ans++;
                    flag=false;
                }
            }
        }
        if(s[s.size()-1]=='1'){
            ans++;
            flag = false;
        }
        cout<<ans<<endl;
    }

    return 0;

}