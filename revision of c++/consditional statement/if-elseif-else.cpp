//greater in 3 number

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter a,b,c"<<endl;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"greatest number is "<<a<<endl;
    }
    else if(b>a && b>c){
        cout<<"greteast number is "<<b<<endl;
    }
    else{
        cout<<"greteset number is "<<c<<endl;
    }
}