//data hiding in class i.e things are private by default
#include<iostream>
using namespace std;
class rec{
  private:
  int length;
  int breadth;

  public:
  int setLength(int l){
     if(l>=0){
        return length=l;
     }
     else{
        return length=0;
     }
  }

  int setBreadth(int b){
    if(b>=0){
        return breadth=b;
    }
    else{
        return b=0;
    }
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
    rec r1;
    r1.setLength(10);
    r1.setBreadth(12);

    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;
    return 0;
}