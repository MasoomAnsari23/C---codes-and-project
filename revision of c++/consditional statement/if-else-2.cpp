//working hours or leisure hours

#include<iostream>
using namespace std;

int main(){
    int time;
    cout<<"enter time(1-24)"<<endl;
    cin>>time;
    if(time>=9 && time<=18){
        cout<<"working hour"<<endl;
    }
    else if(time>=18 && time<=9){
        cout<<"leisture hour"<<endl;
    }
    else{
        cout<<"not a valid time"<<endl;
    }

}