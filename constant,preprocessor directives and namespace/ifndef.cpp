#include<iostream>
using namespace std;

#define PI 3.124  //PI is not a variable

#ifndef PI     //IF NOT DEFINE 
  #define PI 3
#endif         //end if define

int main(){
    cout<<PI<<endl;
}