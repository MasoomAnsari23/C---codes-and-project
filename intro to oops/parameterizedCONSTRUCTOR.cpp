#include<iostream>
using namespace std;
 class rectangle{
    private:
    int length;
    int breadth;

    public:
    rectangle( int l, int b){
        setLength(l);
        setBreadth(b);
    } 

    void setLength(int l){
        if(l>0)
        length=l;
        else
        length=1;
    }

    void setBreadth(int b){
        if(b>0)
        breadth=b;
        else
        breadth=1;
    }

    int area(){
        return length*breadth;
    }

    int perimeter(){
        return 2*(length+breadth);
    }
 };

 int main(){
    rectangle r1(3,5);
    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;
    return 0;
 }