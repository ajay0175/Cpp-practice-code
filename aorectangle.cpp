#include<iostream>
using namespace std;

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDEGE
    freopen("INPUT.txt", "r", stdin);
    freopen("OUTPUT.txt", "w", stdout);
    #endif


    float l,b;

    cout<<"enter the lenght and breath";
    cin>>l>>b;

    float A=l*b;
    cout<<"area of  reactangle is "<<A<<endl;
    


    return 0;

}