#include<iostream>
using namespace std;

class base{
    public:
    void display(){
        cout<<"dispay of base"<<endl;
    }
};

class derived:public base{
    public:
    void display(){
        cout<<"display of derived"<<endl;
    }
};

int main(){
    base b;
    b.display();

    derived d;
    d.display();

    base *p;
    p=new derived();
    p->display();     //this will call display of base not display of derived to avoid this we use 'virtual' in base class
}