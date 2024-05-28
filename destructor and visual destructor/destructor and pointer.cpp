#include<iostream>
using namespace std;

class demo{
    public:
    demo(){
        cout<<"constructor of demo"<<endl;
    }

    ~demo(){
        cout<<"deconstructor of demo"<<endl;
    }
};

void fun(){
    demo *P=new demo();
     delete P;  //we must have to delete pointer if not it will not automatically deleted and it may cause memory leakege
}

int main(){
    fun();
}