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

void io(){
  fst

  #ifndef ONLINE_JUDGE
    freopen("INPUT.txt", "r", stdin);
    freopen("OUTPUT.txt", "w", stdout);
  #endif
}

class student{
    string name;
    public:
    int age;
    bool gender;

    student(){   // Default constructor
        cout<<"Default Constructor"<<'\n';
        // name = s;
        // age = a;
        // gender = g;
    }

    student(string s, int a, bool g){  // parameterised constructor
        name = s;
        age = a;
        gender = g;
    }

    student (student &a){ // copy constructor
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    ~student(){
        cout<<"Destructor"<<'\n';
    }

    void setname(string s){
       name = s;
    }

    void getname(){
        cout<<name<<'\n';
    }

    void print(){
        cout<<"Name: ";
        cout<<name<<'\n';
        cout<<"Age: ";
        cout<<age<<'\n';
        cout<<"Gender: ";
        cout<<gender<<'\n';
    }

    bool operator == (student &a){
        if(name == a.name && age == a.age && gender == a.gender){
            return true;
        }
        return false;
    }
};

signed main() {

  io();

//   student arr[3];
//   for(int i = 0; i < 3; i++){
//     string s;
//     cin>>s;
//     arr[i].setname(s);
//     cin>> arr[i].age;
//     cin>> arr[i].gender;
//   }

//   for (int i = 0; i < 3; i++)
//   {
//     arr[i].print();
//   }

    student a("Ajay", 18, 1);
    a.print();
    student b("abs", 34, 0);
    student c = a; // copy constructor
    // c.print();
  
    if(b == a){
        cout<<"same"<<'\n';
    }
    else{
        cout<<"Not Same"<<'\n';
    }
  return 0;
}
