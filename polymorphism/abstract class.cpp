#include<iostream>
using namespace std;

class base{
    void start(){
        cout<<"base started"<<endl;
    }

    void end()=0;
};
  
class derived{
    void start(){
        cout<<"derived started"<<endl;
    }

    void end(){
        cout<<"all ends here"<<endl;
    }
}  ;

int main(){
    base *p=new derived();
    p->start();
    p->end();
}