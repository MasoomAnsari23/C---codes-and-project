// Static Members 
// • Static data members are members of a class
// • Only one instance of static members is created and shared by all objects
// • They can be accessed directly using class name
// •
// • Static members functions are functions of a class, they can be called using class name, without 
// creating object of a class.
// • They can access only static data members of a class, they cannot access non-static members 
// of a class.

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
};

int test::count=0;  

int main(){
    test t1,t2;
    cout<<t1.count<<endl;
    cout<<t2.count<<endl;
    t1.count=23;
    cout<<t1.count<<endl;  //count will access by both t1 and t2 and it will be same 
    cout<<t2.count<<endl;
}