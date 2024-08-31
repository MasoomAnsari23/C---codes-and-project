// printing sum of n natural number

#include<iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cout<<"enter number upto which sum is required"<<endl;
    cin>>n;

    for(i=1; i<=n; i++){
        sum=sum+i;
    }
    cout<<sum<<endl;
    return 0;
}