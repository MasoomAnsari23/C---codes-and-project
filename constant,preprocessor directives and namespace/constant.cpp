#include<iostream>
using namespace std;

int main(){
    int x=10;
    x++;
    cout<<x<<endl; // it will print x=11

   const int y=10;
   //y++;  //this can't be modified now(this is error now)
   cout<<y<<endl; //it will print 10 without modification because of const
}