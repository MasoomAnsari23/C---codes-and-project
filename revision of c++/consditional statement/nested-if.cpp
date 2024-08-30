//to find out person is adult and vote and senior citizen

#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
     
    if(age>=18){
        cout<<" is adult"<<endl;
        cout<<"can vote"<<endl;
        if(age>=45){
            cout<<"senior citizen"<<endl;
        }
        else{
        cout<<"not senior citizen"<<endl;
        }
        }
        else{
            cout<<"is not adult"<<endl;
            cout<<"can't vote"<<endl;
        }
    
return 0;
}