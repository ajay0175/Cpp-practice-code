#include <bits/stdc++.h>
using namespace std;



int main()
{

int t;
cin>>t;
  
while(t--){
int m ,h;
cin>>m>>h;
int bmi =0;
bmi=m/(h*h);
if(bmi<=18){
    cout<<"1"<<endl;
}else if(18<bmi && bmi<=24){
    cout<<"2"<<endl;
}else if(24<bmi && bmi<=29){
    cout<<"3"<<endl;
}else{
    cout<<"4"<<endl;
}
}
return 0;	 
}
