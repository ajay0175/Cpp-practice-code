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

void merge(int *arr, int s, int e)
{
   int mid = (s + e) / 2;

   int l1= mid - s + 1;
   int l2 = e - mid;

   int *first = new int[l1];
   int *second = new int[l2];

   // copy values
   int mainarrayidx = s;
   for(int i = 0; i < l1; i++)
   {
      first[i] = arr[mainarrayidx++];
   }

   mainarrayidx = mid + 1;
   for(int i = 0; i < l2; i++)
   {
      second[i] = arr[mainarrayidx++];
   }

   // merge 2 sorted array

   int idx1 = 0, idx2 = 0;

   mainarrayidx = s;

   while(idx1 < l1 and idx2 < l2)
   {
      if(first[idx1] < second[idx2])
      {
         arr[mainarrayidx++] = first[idx1++];
      }
      else
      {
         arr[mainarrayidx++] = second[idx2++];
      }
   }

   while(idx1 < l1)
   {
      arr[mainarrayidx++] = first[idx1++];
   }

   while ((idx2 < l2))
   {
      arr[mainarrayidx++] = second[idx2++];
   }
   
}

void merge_sort(int *arr, int s, int e)
{
   // base case
   if(s >= e)
      return;

   // cout << "hii ";
   int mid = (s + e) / 2;  

   // left merge
   merge_sort(arr, s, mid);

   //right merge
   merge_sort(arr, mid + 1, e);

   // merge both part
   merge(arr, s, e);

}

int32_t main() {

   io();

   int t = 1;
   // cin>>t;
   while(t--){
      // cout << " h ii" ;
     int n; cin >> n;
     int arr[1005];

     for(int i = 0; i < n; i++) cin >> arr[i];

     merge_sort(arr, 0, n - 1);

     for(int i = 0; i < n; i++)
     {
        cout << arr[i] << " ";
     }
   }
   return 0;
}