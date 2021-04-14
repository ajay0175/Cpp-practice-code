#include<iostream>
using namespace std;

int main()
{   int a= 10, b=2, c=5;
    int z= a++ + b-- - ++c - c++ + ++a;
          //10   2     6     6    12  
    cout<<a<<endl;//12
    cout<<b<<endl;//1
    cout<<c<<endl;//7
    cout<<z<<endl;//12

    
    return 0;

}