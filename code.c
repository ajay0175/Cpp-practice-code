#include<stdio.h>  

void io(){
    //fst

    #ifndef ONLINE_JUDGE
    freopen("INPUT.txt", "r", stdin);
    freopen("OUTPUT.txt", "w", stdout);
    #endif
}
int main() {

    io();

int t;
scanf("%d",&t);
while (t--)
{
 int n, fact=1 ;       
 scanf("%d",&n);    
 for(int i=1;i<=n;i++){    
      fact=fact*i;    
    }    
  printf("Factorial of %d is: %d\n",n,fact); 
}
   
  return 0;  
}   