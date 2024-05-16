#include<iostream>
using namespace std;

class car{
    public:
    virtual void start()=0; //this is syntax or only difference in virtual and pure virtual function
};

class innova:public car{
    public:
    void start(){
        cout<<"innova started"<<endl;
    }
};

class swift:public car{
    public:
    void start(){
        cout<<"swift started"<<endl;
    }
};

int main(){
    car *c;
    c=new innova();
    c->start();

    c=new swift();
    c->start();
}