//call by value (swaping)
#include<iostream>
using namespace std;
int swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"inside swap"<<a<<" "<<b<<endl; //here it is swapped but call by value can't change original values
}
int main(){
    int x,y;
    cout<<"enter(values to be swaped) x,y"<<endl;
    cin>>x>>y;
    cout<<"value before swapped"<<" "<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<"values after swapping "<<x<<" "<<y<<endl;
    return 0;
}

//swapping fails in call by value