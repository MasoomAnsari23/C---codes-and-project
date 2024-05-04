#include<iostream>
using namespace std;

class rectangle{
    private:
    int length;
    int breadth;

    public:
    rectangle(int l, int b){
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

    int perimeter();   // this is scope resolution 
};

int rectangle :: perimeter(){ // this must be out of class and main block
    return 2*(length+breadth);
}

int main(){
    rectangle r1(4,4);
    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;
}