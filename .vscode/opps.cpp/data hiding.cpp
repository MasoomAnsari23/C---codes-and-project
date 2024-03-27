#include<iostream>
using namespace std;
 class rectangle
 {
    private:  /*by deafault it is private only*/
    int length;
    int breadth;

    public:
    int area()
    {
        return length*breadth;
    }

    int perimeter()
    {
        return 2*(length+breadth);
    }

    /*we can't use dotoperator to set length*/
    /*we haev to use setlength operator to set the values a data are private here*/
    int setLength(int l)
    {
        if(l>=0)
        length=l;
        else
        length=0;
    }

    int setBreadth(int b)
    {
        if(b>=0)
        breadth=b;
        else
        breadth=0;
    }

    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }
 };

 int main()
 {
    rectangle r1;
    r1.setLength(10);
    r1.setBreadth(50);
   cout<<r1.getLength()<<endl;
   cout<<r1.getBreadth()<<endl;
 }