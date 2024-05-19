//this is for y==0
#include<iostream>
using namespace std;

int division(int x,int y){
    if(y==0){
        throw 1;
    }
    else {
        return x/y;
    }
}

int main(){
    int a=10,b=0,c;

    try{
        c=division(a,b);
        cout<<c<<endl;
    }

    catch(int e){
        cout<<"division by zero"<<endl;
    }

    cout<<"program executed successfully"<<endl;
}


//this is for y!=0
#include<iostream>
using namespace std;

int division(int x,int y){
    if(y==0){
        throw 1;
    }

    else {
        return x/y;
    }
}

int main(){
int a=10,b=2,c;

try{
 c=division(a,b);
 cout<<c<<endl;
}

catch(int e){
  cout<<"division by zero"<<endl;
}
cout<<"program executed successfully"<<endl;
}