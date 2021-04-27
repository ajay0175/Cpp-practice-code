#include<bits/stdc++.h>
using namespace std;

long long gcd(long long int a, long long int b)
{
  if (b == 0)
   return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers
long long lcm(int a, int b)
{
   return (a / gcd(a, b)) * b;
}
  
// Driver program to test above function
int main()
{  int t;
   cin>>t;
   while(t--){
   int a,b;
   cin>>a>>b;
   cout<<gcd(a, b)<<" "<<lcm(a,b)<<endl;
   }
   
   
   return 0;
}   