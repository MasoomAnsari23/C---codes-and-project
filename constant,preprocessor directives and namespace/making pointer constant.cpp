//making pointer constant pointer can't be modified but data can be modifed
#include<iostream>
using namespace std;

int main(){
    int x=10;
    int y=20;

    int *const ptr=&x;  //making pointer constant (important line)
    // const int *ptr=&x; both line are same

    //ptr=&y; (this is error)
    
    ++(*ptr); //modifiying data
    cout<<x<<" "<<y<<endl;
}