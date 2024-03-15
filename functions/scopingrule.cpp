#include<iostream>
using namespace std;
int a=9;

int main()
{
    {
      int a=16;
      cout<<a<<endl;  /*scoping rule tells that the nearest variable will be accessed*/
    }
 int a=23;
cout<<a<<endl;
cout<<::a<<endl;   /*this will access global variable instead of loacl variable*/
return 0;
}
