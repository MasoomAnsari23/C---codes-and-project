//call by address(swapping)
#include<iostream>
using namespace std;
int swap(int *a,int *b){
   int temp;
   temp=*a;
   *a=*b;
   *b=temp;
}
int main(){
    int x,y;
    cout<<"enter values to be swapped"<<endl;
    cin>>x>>y;
    cout<<"values before swapping "<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<"value after swapping "<<x<<" "<<y<<endl;
    return 0;
}