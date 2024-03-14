#include<iostream>
using namespace std;

int swap(int &a, int &b)
{
    int temp;
temp=a;
a=b;               /* call by reference can change the actual parameter*/
b=temp;
cout<<&a<<" "<<&b<<endl;
}

int main()
{
    int x=23,y=49;       /* both &a=&x and &b=&y*/
    swap(x,y);
    cout<<x<<" "<<y<<endl;
    cout<<&x<<" "<<&y<<endl;
    return 0;
}