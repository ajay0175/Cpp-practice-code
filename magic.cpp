#include<iostream>
using namespace std;

int main()
{
    int n, a=0;
    cin>>n;

    while(n>0){
        int digit = n%10;  
        n/=10;
        
        if(digit !=1 && digit !=4){
            cout<<"no\n";
        }
        
    
    if (digit == 1) a=0;
    else a++;

    if (a>2){
        cout<<"no\n";
    }  
    } 
    cout<<"yes\n";
    
 return 0;

}