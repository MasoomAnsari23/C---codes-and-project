#include<iostream>
using namespace std;

template <class T>
T maxim( T x, T y)
{
    if(x>y)
    return x;
    else
    return y;
}

int main()
{
 cout<<maxim(12,15)<<endl;
 cout<<maxim(2.5f,2.6f)<<endl;
 return 0;
}

