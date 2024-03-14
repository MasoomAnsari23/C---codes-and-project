#include<iostream>
using namespace std;

int max(int x, int y, int z)
{
    if(x>y && x>z)
    {
        return x;
    }
    else if(y>z)
    {
        return y;
    }
    else
    return z;
}
int main()
{
    int a=9,b=16,c=23,m;
    m=max(a,b,c);
    cout<<"largest no is"<<" "<<m<<endl;
    return 0;
}