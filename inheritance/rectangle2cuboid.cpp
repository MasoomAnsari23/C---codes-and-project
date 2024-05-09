#include<iostream>
using namespace std;

class rectangle{
    private:
    int length;
    int breadth;
     
    public: 
    rectangle(int l=0, int b=0);

void setLength(int l){
    if(l>0){
        length=l;
    }
    else{
        length=1;
    }
}
void setBreadth(int b){
    if(b>0){
        breadth=b;
    }
    else{
    breadth=1;
}
}



 void getLength(int l){
    if(l>0){
        length=l;
    }
    else{
        length=1;
    }
  }
  
 void getBreadth(int b){
    if(b>0){
        breadth=b;
    }
    else 
    {
        breadth=1;
 }
 }

 int area(){
    cout<<length*breadth<<endl;
 }
};

class cuboid :public rectangle{
    private:
    int heigth;
    
    public:
    cuboid(int l=0,int b=0,int h=0){
  //setLength(l);
  //setBreadth(b);
  cuboid (int h){
    height=h;
  }
  int getHeight(){
    if(h>0){
        height=h;
    }
    else{
        height=1;
    }
  }

  int setHeight(){
    if(h>0){
        height=h;
    }
    else {
        height=1;
    }
  }
//   int height=h;
    }
    int volume(){
        return {getLength()*getBreadth()*getHeight();}
    }
};

int main(){
    cuboid c(10,4,5);
    cout<<c.volume()<<endl;
    cout<<c.area()<<endl;
}