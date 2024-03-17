#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"may i know your name?"<<endl;
    /*cin>>name; /*this will only print first name*/
    getline(cin,name); /*this will help to print entire line we have taken as input*/
    cout<<"welcome"<<" "<<name;
    return 0;
}