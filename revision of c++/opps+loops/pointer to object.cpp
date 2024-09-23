//pointer to object
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
    rectangle *p=new rectangle;
    p=&r1;

    p->length=10;
    p->breadth=20;
    cout<<p->area()<<endl;
    cout<<p->perimeter()<<endl;

    //taking input from user
    rectangle r2;
    rectangle *p1=new rectangle;
    p1=&r2;
    cout<<"enter length and breadth "<<endl;
    cin>>p1->length>>p1->breadth;
    cout<<p1->area()<<endl;
    cout<<p1->perimeter()<<endl;
    return 0;
}