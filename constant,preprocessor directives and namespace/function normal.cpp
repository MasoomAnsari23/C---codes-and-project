#include<iostream>
using namespace std;

class demo{
    public:
    int x=10;
    int y=20;

    void display(){
        x++;
        cout<<x<<" "<<y<<endl;
    }
};

int main(){
    demo d;
    d.display();
}