//sum of factor
#include<iostream>
using namespace std;
int main(){
    int sum=0,i,n;
    cout<<"enter n for which sum of factor is needed"<<endl;
    cin>>n;

    for(i=1; i<=n; i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    cout<<"sum of all factors is "<<sum<<endl;
}