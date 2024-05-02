#include<iostream>
using namespace std;

class rectangle{
    public:
    int length;
    int breadth;

    int area(){
        return length*breadth;
    }

    int perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    rectangle r1;
    rectangle *p;  //rectangle p pointing to address of r1
     p=&r1;

r1.length=2;
r1.breadth=6;

cout<<r1.area()<<endl;
cout<<r1.perimeter();
}