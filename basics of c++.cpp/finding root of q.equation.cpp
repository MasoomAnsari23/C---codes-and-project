#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float r1,r2,a,b,c;
    cout<<"entera,b,c"<<endl;
    cin>>a>>b>>c;
    r1=(-b+sqrt(b*b-4*a*c))/(2*a);
    r1=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"roots of square are "<<r1 <<"and"<< r2<<endl;
    return 0;
}