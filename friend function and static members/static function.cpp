#include<iostream>
using namespace std;

class test{
    public:
    int a;

    static int count;

    test(){
        a=10;
        count++;
    }

    static int getCount(){
        return count;
    }
};

int test::count=0;

int main(){
    test t1,t2;
    cout<<t1.getCount()<<endl;
    cout<<t2.getCount()<<endl;
    cout<<test::getCount()<<endl;
}