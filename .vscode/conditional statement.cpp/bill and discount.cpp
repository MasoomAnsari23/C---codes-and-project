#include<iostream>
using namespace std;
int main()
{      
    float totalbill;
    cout<<"enter total bill amount"<<endl;
    cin>>totalbill;
    if(totalbill<100)
    {
        cout<<" no discount"<<endl;
        cout<<"final bill is "<<totalbill<<endl;
    }
    else if(totalbill>=100 && totalbill<500)
    {
        cout<<"10% discount"<<endl;
        cout<<"final bill is "<<(totalbill -(totalbill*10)/100)<<endl;
    }
    else if(totalbill>=500)
      {
        cout<<"20% discount"<<endl;
        cout<<"final bill is "<<(totalbill-(totalbill*20)/100)<<endl;
      }
    return 0;
}