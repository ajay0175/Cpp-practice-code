#include <bits/stdc++.h>
using namespace std;


void fun(){
	long long int p,q;
	  	cin>>q>>p;
	  	long long sum1Aarr=0,sum1Bbrr=0, totalCoup , totalDel ;
	  	int r[3],s[3];

	  	for (int i = 0; i < 3; ++i)
            cin>>r[i];
	  	
	  	for (int i = 0; i < 3; ++i)
	  		cin>>s[i];
	  	
	  	for (int i = 0; i < 3; ++i)
	  	{
	  		sum1Aarr += r[i];
	  		sum1Bbrr += s[i];
	  	}
	  	long long sum1ALll,sum1BLll;
	  	if(sum1Aarr < 150)
	  		sum1ALll = sum1Aarr+q;
	  	else
	  		sum1ALll = sum1Aarr;
	  	if(sum1Bbrr < 150)
	  		sum1BLll = sum1Bbrr+q;
	  	else 
	  		sum1BLll = sum1Bbrr;
	  	totalCoup = sum1ALll + sum1BLll + p;
	  	totalDel = sum1Aarr + sum1Bbrr + 2*q;

	  	if(totalCoup<totalDel)
	  		cout<<"YES"<<endl;
	  	else 
	  		cout<<"NO"<<endl;
}

int main() {

	

	int t;
	cin>>t;
	while(t--)
	{
	  	fun();
	  }
	  	return 0;
}
