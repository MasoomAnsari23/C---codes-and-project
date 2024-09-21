//using same function name for different work
#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}

int sum(int a, int b, int c){
    return a+b+c;
}
 float sum(float a, float b, float c){
     return a+b+c;
 }

int main(){
    int x,y,z,m,n,p;
    m=sum(2,3);
    
    n=sum(2,3,5);
    cout<<m<<" "<<n<<endl;

    p=sum(2.3f,3.4f,4.5f);
    cout<<p<<endl;
}