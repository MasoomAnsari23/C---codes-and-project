//finding sum of all element in array
#include<iostream>
using namespace std;
int main(){
    int i,sum=0;
    int A[5]={3,4,6,2,1};
    for(i=0 ; i<5 ; i++){
        sum=sum+A[i];
    }
    cout<<"sum of element is "<<sum<<endl;
    //taking input in array and printing sum
    int s=0;
    int B[4];
    for(int i=0; i<4; i++){
        cout<<"enter 4 elements of array"<<endl;
        cin>>B[i];
    }
    for(int i=0; i<4; i++){
        s=B[i]+s;
    }
        cout<<s<<endl;
    return 0;
}