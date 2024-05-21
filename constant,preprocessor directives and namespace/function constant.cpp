//making function constant and it data member cant be modified 

#include<iostream>
using namespace std;

class demo{
    public:
    int x=10;
    int y=20;

    void display() const{ //const ie written to make funcion constant
        // x++;  (error)
        cout<<x<<" "<<y<<endl;  //x=10,y=20
    }
};

int main(){
    demo d;
    d.display();
}