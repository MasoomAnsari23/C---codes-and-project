//global variable vs local variable vs static variable
#include<iostream>
using namespace std;
int x=10;//global variable(can be accessed thougout the program created in code section and history sensitive)
int main(){
    int y=12;//local variable can be accessed within the block and created inside stack
    int static z=23;//static variaable created inside stack but history sensitive
    cout<<x<<" "<<y<<endl;
y++;
x++;
cout<<x<<" "<<y<<" "<<z<<endl;
}