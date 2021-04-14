#include <bits/stdc++.h>
using namespace std;

int m();
int main()
{
    int t;
    cin>>t;
    while(t--){
        m();
    }
return 0;	
}

int m(){
    long int n,k;
    cin>>n>>k;
    long int score[k];
    for(long int i=0;i<k;i++){
        cin>>score[i];
    }
    while(n--){
        string sk;
        long int marks=0;
        for(int i=0;i<k;i++){
            if(sk[i]=='1')
            marks+=score[i];
        }
        cout<<marks<<endl;
    } return 0;
}