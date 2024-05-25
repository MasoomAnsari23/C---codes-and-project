//modifiying data instead of pointer

#include<iostream>
using namespace std;

int main(){
    int x=10;
    int y=20;

    int *ptr=&x; //pointer ptr pointing to x 
     ptr=&y;     //modifiying pointer to y
    
     ++(*ptr);  
    cout<<ptr<<endl;
    cout<<x<<" "<<y<<endl; //x=10,y=21 y updating bby ++(*ptr)
}