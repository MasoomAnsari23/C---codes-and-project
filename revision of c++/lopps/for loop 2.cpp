//printing table 
#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"enter table to be printed"<<endl;
    cin>>n;

    for(i=1; i<=10; i++){
        cout<<n<<"*"<<i<<"="<<i*n<<endl;
    }
}