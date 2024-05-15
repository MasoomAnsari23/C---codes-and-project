#include<iostream>
using namespace std;

class basicCar{
    public:
    virtual void start(){
        cout<<"start basic car"<<endl;
    }
};

class advanceCar:public basicCar{
    public:
    void start(){
        cout<<"start advance car"<<endl;
    }
};

int main(){
    basicCar *ptr;
    ptr=new advanceCar(); //this will call advaceCar and this is also run time polymorphism
    ptr->start();
}