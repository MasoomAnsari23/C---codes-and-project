#include<iostream>
using namespace std;

int max(int a=0, int b=0,int c=0)
{
    if(a>b && a>c)
    return a;
    else if(b>c)
    return b;
    else 
    return c;
}

int main()
{
    int d;        /*both of this will work*/
    d=max(22,45,21);
    cout<<d<<endl;


    int x=5,y=6,z=8;
    int e;
    e=max(x,y,z);
    cout<<e<<endl;
    return 0;
}

//by default argument taking input from user
#include<iostream>
using namespace std;

int max(int a,int b,int c=0){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
}
int main(){
    int x,y,z,m;
    cout<<"enter value of x,y,z";
    cin>>x>>y>>z;
    m=max(x,y,z);
    cout<<"greatest number is "<<m<<endl;
}