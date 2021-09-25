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

class A {
    public:
        int a;
        void funA(){
            cout<<"func A"<<'\n';
        }

    private:
        int b;
        void funB(){
            cout<<"func B"<<'\n';
        }


    protected:
        int c;
        void funC(){
            cout<<"fun C"<<'\n';
        }
};

signed main() {

   io();
   
   A obj;
   obj.funA();
   obj.funB(); // it will error because funB is private same with protected
   return 0;
}