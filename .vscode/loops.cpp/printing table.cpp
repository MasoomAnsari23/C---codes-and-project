#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter no. which you want to print table"<<endl;
    cin>>n;
    for(i=1;i<=10;i++)
    {
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }
}