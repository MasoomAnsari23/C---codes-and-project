#include<iostream>
using namespace std;
  
int fun()
{
    static int a=15;   /*act as global variable */
    a++;               /* only accessble within function defined*/
    cout<<a<<endl;     /*history sensitive*/
}                     /*creat in coding section like global variable*/
int main()
{
    fun();
    fun();
}