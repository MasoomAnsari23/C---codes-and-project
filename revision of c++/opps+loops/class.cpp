//writing a class for rectangle
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
};//mandatory

int main(){
     rectangle r2;
     cout<<"enter length and breadth "<<endl;
     cin>>r2.length>>r2.breadth;//taking input from user
    rectangle r1;
    r1.length=10;
    r1.breadth=20;
    cout<<"area of r1 "<<r1.area()<<endl;
    cout<<"perimeter of r1 "<<r1.perimeter()<<endl;

    cout<<"area of r2 "<<r2.area()<<endl;
    cout<<"perimeter of r2 "<<r2.perimeter();
    return 0;
}