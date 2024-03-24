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
        rectangle rec;
        rec.length=15;
        rec.breadth=10;
        cout<<rec.area()<<endl;
        cout<<rec.perimeter();
        return 0;
    } 