// //printing greater number

// #include<iostream>
// using namespace std;

// int main(){
//     int a, b;
//     cin>>a;
//     cin>>b;
//     if(a>b){
//         cout<<"greatest number is "<<a<<endl;
//     }
//     else{
//         cout<<"gretest number is "<<b<<endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"enter x,y and z"<<endl;
    cin>>x>>y>>z;
    if(x>y && x>z){
        cout<<"greatest number is "<<x<<endl;
    }

    else if(y>x && y>z){
        cout<<"greatest number is "<<y<<endl;
    }

    else{
        cout<<"greatest number is "<<z<<endl;
    }
    return 0;
}