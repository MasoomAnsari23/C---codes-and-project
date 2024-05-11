#include<iostream>
using namespace std;

class rectangle{
    private:
    int length;
    int breadth;

    public:
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

    int getLength(){
        return length;
    }

    int getBreadth(){
        return breadth;
    }

    int area(){
        return length*breadth;
    }

    int perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    rectangle r1;
    r1.setLength(5);
    r1.setBreadth(10);
    cout<<"area is "<<r1.area()<<endl;
    cout<<"perimeter is "<<r1.perimeter()<<endl;
    cout<<"length is "<<r1.getLength()<<endl;
    cout<<"breadth is "<<r1.getBreadth()<<endl;
}