#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a,b,c"<<endl;
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        return a;
        cout<<"maximum is "<<a<<endl;
    }
    else if(b>a && b>c)
    {
    return b;
    cout<<"maximum is "<<b<<endl;
    }
    else{    
    cout<<"maximum is "<<c<<endl;
    }
    return 0;
}