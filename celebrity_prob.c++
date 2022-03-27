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

class Solution 
{
    private:
    bool knowns(vector<vector<int>> &m, int a, int b)
    {
        if(m[a][b] == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& m, int n)
    {
        stack<int> s;
      for (int i = 0; i < n; i++)
      {
         s.push(i);
      }

      // step 2

      while (s.size() > 1)      
      {  
         int a = s.top();
         s.pop();

         int b = s.top();
         s.pop();

         if(knowns(m, a, b))
         {
            s.push(b);
         }
         else
         {
            s.push(a);
         }
      }

         int zerocnt = 0;
         int candidate = s.top();
         for (int i = 0; i < n; i++)
         {
            if(m[candidate][i] == 0)
            {
                  zerocnt++;
            }
         }

         // all zeros
         if(zerocnt != n)
         {
            return -1;
         }
         
         // column check
         int onecnt = 0;

         for (int i = 0; i < n; i++)
         {
            if(m[i][candidate] == 1)
               onecnt++ ;
         }

         if(onecnt != n - 1)
         {
            return - 1;
         }
         
        return candidate;
    }
};

int32_t main() {
  io();

   int n;  cin >> n;
   vector<vector<int>> m(n, vector<int> (n, 0));

   for(int i = 0; i < n; i++)
   {
      for (int j  = 0; j < n; j++)
      {                 
         cin >> m[i][j];
      }
   }


      Solution ob;
      cout << ob.celebrity(m, n) << '\n';

   return 0;
}