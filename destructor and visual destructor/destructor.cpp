#include<iostream>
using namespace std;

class demo{
    public:
    demo(){ //constructor: allocates resources
        cout<<"contructor of demo"<<endl; 
    }

    ~demo(){ //dsconstructor: deallocates resources
        cout<<"desconstructor of demo"<<endl;
    }
};

 void fun(){
        demo d;
    }

    int main(){
        fun();  //constructor is created when function fun ends automatically destructor is called
    }