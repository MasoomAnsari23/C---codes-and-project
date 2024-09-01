// printing perfect number :2n=sum of factor of n

#include<iostream>
using namespace std;
int main(){
    int sum=0, n, i;
    cout<<"enter n"<<endl;
    cin>>n;
    for(i=1; i<=n; i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(2*n== sum){
        cout<<n<<" is perfect number"<<endl;
    }
    else{
        cout<<n<<" is not a perfect number"<<endl;
    }
} 

