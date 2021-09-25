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

class Funtion_Overloading
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

// Operator Overloading

class Operator_Overloading
{
 private:
   int real, imag;
 public:
   Operator_Overloading(int r = 0, int i = 0)
   {
      real = r;
      imag = i;
   }

   Operator_Overloading operator + (Operator_Overloading const &obj)
   {
      Operator_Overloading res;
      res.imag = imag + obj.imag;
      res.real = real + obj.real;
      return res;
   }

   void display()
   {
      cout << real <<" + i" << imag <<endl;
   }
};


int32_t main() {
  io();

//   Funtion_Overloading fo;
//   fo.fun();
//   fo.fun(4ll); // int is define has a long long
//   fo.fun(4.0);

   Operator_Overloading op1(10ll, 3ll);
   Operator_Overloading op2(4ll, 3ll);
   Operator_Overloading op3 = op1 + op2;
   op1.display();
   op2.display();
   op3.display();
    
   return 0;
}