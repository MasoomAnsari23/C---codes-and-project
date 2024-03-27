#include<iostream>
using namespace std;

class square
{
    public:
    int length;
     
     int area()
     {
        return length*length;
     }
     int perimeter()
     {
        return 4*length;
     }
};
     int main()
     {
        square sq;
        sq.length=10;
        cout<<sq.length<<endl;
        cout<<sq.area()<<endl;
        cout<<sq.perimeter()<<endl;
        return 0;
     }
