#include<bits/stdc++.h>
using  namespace std;

#define int         long long
#define vi          vector<int>
#define pii         vector<pair<int,int>>
#define ms          multiset
#define pb          push_back
#define pob         pop_back
#define ff          first
#define ss          second
#define stp(x)      fixed << setprecision(x)
#define fst         ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define inf         1e18
#define mod         1000000007
#define n           100

void io(){
  fst

  #ifndef ONLINE_JUDGE
    freopen("INPUT.txt", "r", stdin);
    freopen("OUTPUT.txt", "w", stdout);
  #endif


}

class Stack{
    int *arr;
    int top;

    public:
        Stack(){
            arr = new int [n];
            top = -1;
        }
    
    void push(int x){
        if(top == n-1){
           cout<<"Stack is full"<<'\n';
           return; 
        }

        top++;
        arr[top] = x;
    }

    void pop(){
        if(top == -1){
            cout<<"Stack is empty"<<'\n';
            return;
        }

        top--;
    }

    int Top(){
        if(top == -1){
            cout<<"Stack is empty"<<'\n';
            return -1;
        }

        return arr[top];
    }

    bool empty(){
        return top == -1;
    }
};

int32_t main() {

  io();

  Stack s;
  s.push(1);
  s.push(2);
  s.push(3);

  cout<<s.Top()<<'\n';
  s.pop();
  cout<<s.Top()<<'\n';
  s.pop();
  cout<<s.Top()<<'\n';

  return 0;
}