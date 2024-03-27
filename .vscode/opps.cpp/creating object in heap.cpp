#include<iostream>
using namespace std;
 
class rectangle
{
    public:
    int length;
    int breadth;

   int area()
   {
    return length*breadth;
   }

   int perimeter()
   {
    return 2*(length+breadth);
   }
};

int main()
{
    rectangle *r1;   /*  rectangle*r1=new rectangle;  */
    r1=new rectangle;

    r1->length=10;  /* you can't use r1.length */
    r1->breadth=5;  

    cout<<r1->area()<<endl;
    cout<<r1->perimeter()<<endl;  /*dot operator are invalid in heap*/
     return 0;
}