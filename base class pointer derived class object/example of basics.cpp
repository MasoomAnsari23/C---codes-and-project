#include<iostream>
using namespace std;

class rectangle{
    public:
    void area(){
        cout<<"area of rectange"<<endl;
    }
};

class cuboid:public rectangle{
    public:
    void volume(){
        cout<<"volume of cuboid"<<endl;
    }
};

int main(){
 cuboid c;
 c.area();   
 c.volume();

 cuboid c1;
 rectangle *ptr=&c1;
 ptr->area();
 //ptr->volume();  error, volume is not defined in cuboid which is called rectangle

 rectangle r;
 r.area();
 // r.volume();  error, volume not define in rectangle

//  rectangle r;
 //cuboid *pt=&r;  statement is wrong, we can't call pointing cuboid a rectangle
//  pt->area();
//  pt->volume();

return 0;
}