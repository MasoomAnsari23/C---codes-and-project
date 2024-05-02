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
    rectangle *p;
    rectangle *q;

 p=new rectangle;
 q=new rectangle;

 p->length=4;
 p->breadth=5;

 cout<<p->area()<<endl;
 cout<<p->perimeter()<<endl;
}