#include<iostream>
using namespace std;

class base{
public:
base(){
    cout<<"non parameterized constructor"<<endl;
}

base(int x){
    cout<<"parameterized constructor"<<x<<endl;
}
};
class derived:public base{
    public:
    derived(){
        cout<<"non parameterized constructor"<<endl;
    }

derived(int y){
    cout<<"parameterized constructor"<<y<<endl;
}

 derived(int x , int y):base(x){
 cout<<"parameterized of derived"<<y<<endl;
 }
};

int main(){
    derived d; 
    derived x(10);
    derived y(5,7);
}
