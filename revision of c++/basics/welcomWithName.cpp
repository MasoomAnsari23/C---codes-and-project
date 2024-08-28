#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"enetr your name"<<endl;
    cin>>name;
    cout<<"welcome "<<name<<endl;  //it prints only first name
    getline(cin,name);
    cout<<"welcome "<<name<<endl;  // it will print full name
    return 0;
}