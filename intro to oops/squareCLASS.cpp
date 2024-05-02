#include<iostream>
using namespace std;
 class square{
    public:
    int side;

 int area(){
    return side*side;
 }

 int perimeter(){
    return 4*side;
 }
};

int main(){
    square s1;
    s1.side=4;
    cout<<s1.area()<<endl;
    cout<<s1.perimeter();
} 