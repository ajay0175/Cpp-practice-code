#include<bits/stdc++.h>
using namespace std;


void palindrome(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	bool p=1;
	int count = 0;
	for(int i=0;i<n;i++){
		count += s[i]=='0';
	}
	if(count== 1){
		cout << "BOB\n";
		return;
	}
	if(count%2){
		cout<<"ALICE\n";
		return;
	}
	cout<<"BOB\n";
	return;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		palindrome();
	}
    return 0;
}