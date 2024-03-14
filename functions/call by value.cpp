#include<iostream>>
using namespace std;

int swap(int a, int b)
{
    cout<<a<<" "<<b<<endl;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;
}

int main()
{
    int x=23, y=49;    /*actual parameter can't change by call by vale*/
    swap(x,y);
    cout<<x<<" "<<y<<endl;
}