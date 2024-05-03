#include<iostream>
using namespace std;

class rectangle
{
    public:       /*class is by default private so we need to make it public */
    int length;     /* we cant access or initailize cvalues of private things*/
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
    rectangle r1;
    r1.length=23;
    r1.breadth=16;
    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;
    return 0;
}