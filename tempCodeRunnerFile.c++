#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        int d,c;
        cin>>d>>c;
        int a[3],b[3];
        for(inti=0;i<3;i++){
            cin>>a[i];
        }
        for(int i=0;i<3;i++){
            cin>>b[i];
        }
        int p=a1+a2+a3;
        int s=b1+b2+b3;
        if(sum1>=150 && sum2>=150)
        {
            if((p+s+c)<(p+s+d+d))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if(p>=150 || s>=150)
        {
            if((p+c+s+d)<(p+s+d+d))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}