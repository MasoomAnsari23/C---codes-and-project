//discount in total bill, take bill as input and calculate discount and final bill 
//bill>=100 && bill<500   discount=10%
//bill>=500  discount=20%

#include<iostream>
using namespace std;

int main(){
    int bill;
    cout<<"enter your bill without discount"<<endl;
    cin>>bill;

    if(bill>=100 && bill<500){
        cout<<"discount is 10% "<<bill*0.1<<endl;
        cout<<"final bill after discount "<<bill-(bill*0.1)<<endl;
    }
    else if(bill>=500){
        cout<<"discount is 20% "<<bill*0.2<<endl;
        cout<<"final bill afer discount is "<<bill-(bill*0.2)<<endl;
    }
    else {
        cout<<"not a discountable amount"<<endl;
        cout<<"discount is 0% "<<endl;
        cout<<"final bill is "<<bill<<endl;
    }
    return 0;
}