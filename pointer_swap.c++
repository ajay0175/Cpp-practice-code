#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    }

int main(){
    int a=2,b=5;
    /* int *aptr=&a;
    int *bptr=&b;
 */
    swap(&a, &b);
    cout<<a<<" "<<b<<endl;

    
    return 0;
}