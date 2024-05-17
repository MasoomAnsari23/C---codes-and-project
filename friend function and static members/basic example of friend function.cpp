#include<iostream>
using namespace std;

class test{
    private: 
    int a;
    public:
    int b;
    protected:
    int c;
    friend void fun();  //this friend function is used to access private and protected members
};

void fun(){
    test t;  //object of class test
    t.a=4;  //valid
    t.b=6;  //valid already
    t.c=8;  //valid
}

// by using friend function we can access private and protected member as well
//usefull when we have to associate onr class with another class