#include<iostream>
using namespace std;

int main()
{ float a,b,c;
cin>>a>>b>>c;

    if(a>b)
    {
        if (a>c){
            int M=a*c;
            cout<<M<<endl;

        }
        else{
            float D=a/b;
            cout<<D<<endl;


        }

        

    }
    else
    {
        if(b>c)
        {
            int s=a+b;
            cout<<s<<endl;
        }
        else{
            int mi=a-b;
            cout<<mi<<endl;

        }
    }
    
    return 0;

}