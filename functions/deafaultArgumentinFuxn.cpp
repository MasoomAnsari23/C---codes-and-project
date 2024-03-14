#include<iostream>
using namespace std;

int max(int a=0, int b=0,int c=0)
{
    if(a>b && a>c)
    return a;
    else if(b>c)
    return b;
    else 
    return c;
}

int main()
{
    int d;        /*both of this will work*/
    d=max(22,45,21);
    cout<<d<<endl;
    return 0;

    /*int x=5,y=6,z=8,d;
    d=max(x,y,z);
    cout<<d<<endl;
    return 0;*/
}