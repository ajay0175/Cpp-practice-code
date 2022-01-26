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
    
    // int i = 5;
    // int &j = i;

    // cout << i << '\n';

    // char ch = 'a';

    // cout << sizeof(ch) << '\n';


    // char *c = &ch;

    // cout << sizeof(c) << '\n'; 

    // Stack memory => Static memory 
    // Heap memory => Dynmaic memory

    int n; cin >> n;

    int *arr = new int[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    cout << sum << '\n';

   return 0;
}