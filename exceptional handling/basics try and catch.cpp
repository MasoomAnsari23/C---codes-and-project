//division and exceptional handing
#include<iostream>
using namespace std;

int main(){
    int x=10,y=2,z;

    try{
       if(y==0){  //if y=0 it will throw 1
        throw 1;
       }

       else{     //if y!=0 ,this will execute
        z=x/y;
        cout<<z<<endl;
       }
    }
       catch(int e){
        cout<<"division by zero"<<endl<<e<<endl;  //this will execute if y==0
       }
    cout<<"program terminated successfully"<<endl;  //exeute when program is correct
}