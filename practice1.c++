#include<bits/stdc++.h>
using  namespace std;

int main(){


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   /*  #ifndef ONLINE_JUDEGE
    freopen("INPUT.txt", "r", stdin);
    freopen("OUTPUT.txt", "w", stdout);
    #endif*/
 
    
      /* char arr[100];
      cin>>arr;
     cout<<arr<<endl; */

       //largest  word in a sentence  
       int n;
       cin>>n;
       cin.ignore();
       char arr[n+1];
       cin.getline(arr,n);  //input the sentence including space
       cin.ignore();
        int i=0;
        int curlen=0, maxlen=0;
        int st=0, maxst=0;
        while(1)
        {
            if(arr[i]==' ' || arr[i]=='\0'){
                if (curlen>maxlen)
                {  maxlen=curlen;
                  maxst=st;
                }
                curlen=0;
                st=i+1;
            }else
            curlen++;
            if(arr[i]=='\0')
            break;
            i++;
        }
        cout<<maxlen<<endl;
        for(int i=0;i<maxlen;i++){
            cout<<arr[i+maxst];
        }
        
    
    
 return 0;
}