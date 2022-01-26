#include<bits/stdc++.h>
using  namespace std;

#define int   long long
#define ms    multiset
#define pb    push_back
#define pob   pop_back
#define ff    first
#define ss    second
#define fst   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define MOD   1000000007

void io(){
   fst

   #ifndef ONLINE_JUDGE
   freopen("INPUT.txt", "r", stdin);
   freopen("OUTPUT.txt", "w", stdout);
   #endif
}

int32_t main() {
  io();
    
    int n, m; cin >> n >> m;

    int32_t **arr = new int32_t*[n];
    
    // intializing a 2D array
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int32_t[m];
    }

    // Taking input in 2D array

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];   
        }
        
    }

    // Outputing the element the in 2D array

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout <<  arr[i][j] << " ";  
        }
        cout << '\n';
    }

    // Releasing memory

    for (int i = 0; i < n; i++)
    {
        delete []  arr[i];
    }

    delete []arr;
    
   return 0;
}