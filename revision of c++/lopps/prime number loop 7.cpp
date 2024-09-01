// fimding given number is prime or not

#include<iostream>
using namespace std;
int main(){
    int n,i,count=0;
    cout<<"enter n"<<endl;
    cin>>n;

    for(i=1; i<=n; i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<n<<" is a prime number"<<endl;
    }
    else{
        cout<<n<<" is not a prime number"<<endl;
    }
    return 0;
}