#include<iostream>
using namespace std;
class base {
    public : void display(){
        cout<<"In base\n";
    }
};
class  derived1: public base {
    public: virtual void display(){
        cout<<"in derived1\n";
    }
};
class derived2:public base{
    public:void display(){
        cout<<"in derived2\n";

    }
};
int main()
{
    derived1 obj1;
    derived2 obj2;
    base *ptr;
    ptr=&obj1;
    ptr->display();
    ptr=&obj2;
    ptr->display();
    obj1.display();
    ptr->display();
    return 0;
}