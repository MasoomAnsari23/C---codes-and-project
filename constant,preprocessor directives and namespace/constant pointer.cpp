#include<iostream>
using namespace std;

int main(){
    int x=10;
    int *ptr=&x;
    //++x; this both are same
    ++*ptr;
    cout<<x<<endl; //print 11

    int y=20;
    const int *pt=&y; //making pointer constant
   // ++*pt;  (this is error)
    cout<<y<<endl;//prints 20
}