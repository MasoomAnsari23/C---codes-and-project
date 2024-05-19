#include<iostream>
using namespace std;

//throwing class
class myException{
};

int main(){
    int x=10,y=0,z;

    try {
     if(y==0){
        throw myException();
     }   
     else{
        z=x/y;
     }
     cout<<z<<endl;
    }

    catch(myException e){
    cout<<"division by 0"<<endl;
    }

    cout<<"program executed successfully"<<endl;
}