//syntax of friend function
//  Friend functions are global functions
//  They can access member of a class upon their objects
//  A class can be declared as friend on another class
//  All the functions of friend class can access private and protected members of other class

#include<iostream>
using namespace std;

class your;  //this is where you have to access
class my{
    private:
    int a=4;
    public:
    int b=5;
    protected:
    int c=9;
    class your;
    friend your; //class in which you have to access
};

class your{
    public:
    my m; //object of class my
    void fun(){

    }
};