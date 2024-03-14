#include<iostream>
using namespace std;

int swap(int *a, int *b)
{
    int temp;
    temp=*a;       /* call by address can change the actual parameter*/
    *a=*b;
    *b=temp;
}

int main()
{
    int x=23,y=49;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}