#include<iostream>
using namespace std;

class base{
    public:

    base(){
        cout<<"constructor base"<<endl;
    }

    virtual ~base(){                     //virtual to call destructor
        cout<<"destrucotr base"<<endl;
    }
};

class derived:public base{
    public:
    derived(){
        cout<<"constructor derived"<<endl;
    }
    virtual ~derived(){                  //virtual to call destructor
        cout<<"destructor derived"<<endl;
    }
};

void fun(){
    base *p=new derived;
     delete p;
}
int main(){
    fun();
}