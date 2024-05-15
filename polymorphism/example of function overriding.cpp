#include<iostream>
using namespace std;

class base{
    public:
    virtual void display(){
    cout<<"display of base"<<endl;
}
};

class derived:public base{
    public:
    void display(){
        cout<<"diaplay of derived"<<endl;
    }
};

int main(){
 base *p=new derived(); // it will call derived class because of virtual
// this is also run time polymorphism
// it can also be written as
// base *p;
// p=new derived();

p->display();
}