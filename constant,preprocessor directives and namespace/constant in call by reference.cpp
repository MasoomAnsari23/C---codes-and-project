// making call by reference as constant

#include<iostream>
using namespace std;

void func(const int &x, const int &y){// x and y are set constant now it cant be modified
    //x++; (error) can't be modified
   // y++; (error) can't be modified
    cout<<x<<" "<<y<<endl;
}

int main(){
    int a=10,b=20;
    func(a,b);
}