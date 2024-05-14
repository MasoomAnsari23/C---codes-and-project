#include<iostream>
using namespace std;

class base{
    public:
    void fun1(){
        cout<<"fun 1 of base class"<<endl;
    }
};

class derived:public base{
    public:
    void fun2(){
        cout<<"fun 2 of derived class"<<endl;
    }
};

int main(){
    base b;
    b.fun1();
   // b.fun2();  error , we can't call derived class

   derived d;
   d.fun1();  //we call base class because it inheriting from base class
   d.fun2();  


derived D;
base*ptr=&D;
ptr->fun1();
// ptr->fun2(); error because fun2 is not present in base class


// base B;
// derived*ptr=&B;  //this is not allowed at all
// ptr->fun1();
// ptr->fun2();
return 0;

}

