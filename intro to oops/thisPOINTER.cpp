#include<iostream>
using namespace std;

class rectangle{
  private:
  int length;
  int breadth;

   public:
  rectangle(int length, int breadth){
    this->length=length;   // this is called tis pointer
    this->breadth=breadth;
  }
   
  int area(){
    return length*breadth;
  }
};

int main(){
    rectangle r1(3,4);
    cout<<r1.area()<<endl;
}