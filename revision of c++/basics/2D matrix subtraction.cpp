#include<iostream>
using namespace std;
int main(){
    int A[2][4]={{2,3,4,6},{1,3,6,9}};
    int B[2][4]={{2,3,4,6},{1,3,6,9}};
    int C[2][4];
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            C[i][j]=A[i][j]-B[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cout<<C[i][j]<<endl;
        }
    }
    return 0;
}