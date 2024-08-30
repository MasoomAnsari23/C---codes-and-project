// child adult and old
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;

    if(age>=0 && age<=17){
        cout<<"you are child"<<endl;
    }
    else if(age>=18 && age<=40){
        cout<<"you are adult"<<endl;
    }
    else{
        cout<<"you are old"<<endl;
    }
    return 0;
}