#include<iostream>
using namespace std;
int g=9;

int main()
{
    {
      int a=16;
      cout<<a<<endl;  /*scoping rule tells that the nearest variable will be accessed*/
      cout<<g<<endl;
    }
 int a=23;
cout<<a<<endl;
cout<<g<<endl;
return 0;
}
