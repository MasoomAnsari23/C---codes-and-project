// intialization and declaration of array and printing element of array
#include<iostream>
using namespace std;
int main(){
    int A[5]={2,6,4,5,6};
     int B[]={2,34,5,6,6,7,76,787};
     //int C[3]={2,5,3,6};
     int D[4]={2,6,8};
    for(int i=0; i<=5; i++){ //for loop
        cout<<A[i]<<endl;
    }
         cout<<B[6]<<endl;
         //cout<<C[3]<<endl; //this will pass error 
         cout<<D[0]<<D[1]<<D[2]<<D[3]<<endl;
    
//for each loop
for(auto x:B){// auto automatically identify data type
    cout<<x<<endl;
}

    return 0;
}