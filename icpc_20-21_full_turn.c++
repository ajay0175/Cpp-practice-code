#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,t;
    cin>>t;
    while(t--){
        cin>>n;
        map<pair<int,int>,int>mp;
        long long int ans=0;
        while(n--){
            int a,b,c,d,g;
            cin>>a>>b>>c>>d;
            int x=c-a;
            int y=d-b;
            g=abs(__gcd(x,y));
            x/=g;
            y/=g;
            ans+=mp[make_pair(x,y)];
            mp[make_pair(-x,-y)]++;
        } cout<<ans<<endl;
    }
    
    return 0;
}