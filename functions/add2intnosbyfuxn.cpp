#include<iostream>
using namespace std;

int add(int a, int b)
{
    int c;
    c=a+b;
    return c;
}

int main()
{
    int x=23, y=49, z;
    z=add(x,y);
    cout<<"sum is"<<" "<<z<<endl;
}