#include<iostream>
using namespace std;

class rectangle{
    private:
    int length;
    int breadth;

    public:

        int setLength(int l){
        if (l>=0){
        length=l;
        }
        else
        length=0;
      }
        int setBreadth(int b){
            if(b>=0){
                breadth=b;
                // return b is wrong 
            }
                else
                breadth=0;
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
    r1.setLength(30);
    r1.setBreadth(50);

    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;
    return 0;
}

