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
    return length*breadth; //inlinr
 }

 int perimeter();//non inline

 inline int sum();  //making non inline to inline
 
};

int rectangle ::perimeter(){
    return 2*(length+breadth);  //this is non inline now
}
int rectangle ::sum(){
    return length+breadth;    //this is inline now
}

int main(){
    rectangle r1(3,6);
    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;
    cout<<r1.sum()<<endl;
}