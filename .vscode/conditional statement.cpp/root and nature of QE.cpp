#include<iostream>
using namespace std;
int main()
{
    int a,b,c,D;
    cout<<"enter a,b,c"<<endl;
    cin>>a>>b>>c;
    D=(b*b-4*a*c);
    if(D==0)
    {
        cout<<"both roots are real and equal"<<endl;
        cout<<"roots are "<<(-b/(2*a))<<endl;
    }
    else if(D>0)
    {
        cout<<"roots are real and unequal"<<endl;
        cout<<"roots are "<<(-b+sqrt(D))/(2*a)<<" and "<<(-b-sqrt(D))/(2*a)<<endl;
    }
    else
    {
        cout<<"roots are imaginary"<<endl;
    }
    return 0;
}