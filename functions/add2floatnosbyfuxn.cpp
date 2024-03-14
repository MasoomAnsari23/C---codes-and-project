#include<iostream>
using namespace std;

int add(float x, float y)
{
    float z;
    z=x+y;
    return z;
}
int main()
{
    float a=16.9f,b=9.6f,c;
    c=add(a,b);
    cout<<"sum is"<<" "<<c<<endl;
    return 0;
}