//using function , taking input from user and finding max of 3 numbers
#include<iostream>
using namespace std;
int MAX(int x, int y, int z){
    if(x>y && x>z){
        cout<<x<<" is greatest number"<<endl;
    }
    else if(y>x && y>z){
        cout<<y<<" is greatest number"<<endl;
    }
    else{
        cout<<z<<" is greatest number"<<endl;
    }
    return 0;
}

int main(){
    int a;
    int b;int c;
    int m;
    cout<<"enter a, b ,c"<<endl;
    cin>>a>>b>>c;
    m=MAX(a,b,c);
    cout<<m<<endl;
}