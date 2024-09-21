//call by reference(swapping)
#include<iostream>
using namespace std;
int swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int x,y;
    cout<<"enter value to be swapped "<<endl;
    cin>>x>>y;
    cout<<"value before swapping "<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<"values after swapping "<<x<<" "<<y<<endl;
    return 0;
}