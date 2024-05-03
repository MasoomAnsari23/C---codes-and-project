#include<iostream>
using namespace std;
int g=23;  /*global variable can be accsess by anywhere in program*/
          /*global variable are history sensitive*/
int fun()
{
    int a=10;
    a++;/* this is local variable and only can be access within this funxn*/
    g++;
    cout<<a<<" "<<g<<endl;
    return 0;
}

int main()
{
    cout<<g<<endl;
    fun();
    cout<<g<<endl;
    return 0;
}