#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int t;
	cin>>t;
	while(t--)
    {
		long long int a , b;
		cin>>a>>b;
		cout<< __builtin_popcountll(a^b)<<endl;
	}
        


return 0;
}
    
    