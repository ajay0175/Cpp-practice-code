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

// Funtion Overloading

class polymorphism
{
public:
   void fun()
   {
      cout <<"A funtion with no argument"<< endl;
   }

   void fun(int n)
   {
      cout <<"A funtion with int argument"<< endl;
   }

   void fun(double n)
   {
      cout << "A funtion with double argument" << endl;
   }
};

int32_t main() {
  io();

  polymorphism p;
  p.fun();
  p.fun(4ll); // int is define has a long long
  p.fun(4.0);
    
   return 0;
}