// days of week
#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"enter your day number"<<endl;
    cin>>day;

    switch(day){
        case 7:cout<<"sunday"<<endl;
        break;
    
        case 1:cout<<"monday"<<endl;
        break;
    
        case 2:cout<<"tuesday"<<endl;
        break;
    
        case 3:cout<<"wednesday"<<endl;
        break;
    
        case 4:cout<<"thrusday"<<endl;
        break;
    
        case 5:cout<<"friday"<<endl;
        break;
    
        case 6:cout<<"saturday"<<endl;
        break;

        default:cout<<"not a valid day"<<endl;
    }
 return 0;
}