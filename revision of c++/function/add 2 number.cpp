//using function to add 2 number
#include<iostream>
using namespace std;

int ADD(int x, int y){
    int z;
    z=x+y;
    return z;
}

int main(){
    int a=10;
    int b=15;
    int c;
    c=ADD(a,b);
    cout<<c<<endl;
    return 0;
}