//neither pointer nor integer can be modified
#include<iostream>
using namespace std;

int main(){
    int x=10;
    int y=20;

    const int *const ptr=&x; // both int and pointer are constant
    //ptr=&y; (error)
    //==(*ptr); (error)

    cout<<x<<" "<<y<<endl;
}