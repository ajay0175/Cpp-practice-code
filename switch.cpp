#include<iostream>
using namespace std;

int main()
{
    float a,b ;
    char op;

    cout<<"enter the 2 numbers: ";
    cin >>a>>b;

    cout<<"enter the operand:";
    cin>>op;

    switch(op)
    {
        case '+': cout<<"a"<<"+"<<"b"<<"="<<a+b<<endl;
        break;

        case '-': cout<<"a"<<"-"<<"b"<<"="<<a-b<<endl;
        break;

        case '*': cout<<"a"<<"*"<<"b"<<"="<<a*b<<endl;
        break;

        case '/': cout<<"a"<<"/"<<"b"<<"="<<a/b<<endl;
        break;
    
    default:
    cout<<"operator not found"<<endl;
    break;
        }


     return 0;

} 


