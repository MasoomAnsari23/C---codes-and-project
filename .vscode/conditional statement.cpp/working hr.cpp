#include<iostream>
using namespace std;
int main()
{
    int hours;
    cout<<"enter hours"<<endl;
    cin>>hours;
    if(hours>=9 && hours<=18)
    {
        cout<<"its a working hours"<<endl;
    }
    else if(hours>=18 && hours<=9)
    {
        cout<<"its not working hours"<<endl;
    }
    else{
        cout<<"its not a valid hours"<<endl;
    }
    return 0;
}