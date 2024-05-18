#include<iostream>
using namespace std;

class car{
    public:
    static int price;
    static int getPrice(){
        return price;
    }
};

int car::price=200000;

int main(){
    car c1,c2,c3;
    cout<<c1.price<<endl;
    cout<<c2.price<<endl;
    cout<<c3.price<<endl;

    cout<<car::price<<endl;
}
