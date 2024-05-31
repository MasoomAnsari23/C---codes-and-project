#include<iostream>
using namespace std;

class demo{
    int *p; //its automatically private

    public:
    demo(){
       p=new int[10];
       cout<<"constructor of demo"<<endl; 
    }

    ~demo(){
        delete []p;
        cout<<"deconstructor of demo"<<endl;
    }
};

void fun(){
    demo d;
}

int main(){
    fun();
}