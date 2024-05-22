#include<iostream>
using namespace std;

void func(int &x, int &y){
    x++;
    cout<<x<<" "<<y<<endl;
}

int main(){
    int a=10,b=20;
    func(a,b);
}