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
    rectangle r1,r2;
    rectangle *R;  /*rectangle *R=&r1 */
    R=&r1;
    R=&r2;

    r1.length=10;
    r1.breadth=6;

   R->length=8;
   R->breadth=4;

   cout<<r1.area()<<endl;
   cout<<r1.perimeter()<<endl;

   cout<<R->area()<<endl;
   cout<<R->perimeter()<<endl;
   return 0;

}