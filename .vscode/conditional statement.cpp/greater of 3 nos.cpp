#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a,b,c"<<endl;
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"greatest no is "<<a<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<"greatest no is "<<b<<endl;
    }
    else
    {
        cout<<"greatest no is "<<c<<endl;
    }
    return 0;
}