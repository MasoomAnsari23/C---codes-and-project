#include<iostream>
using namespace std;
int main(){
    int i,j;
    int C[2][3];
    int A[2][3]={{2,3,5},{5,7,8}};
    int B[2][3]={{2,3,5},{5,7,8}};
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
        C[i][j]=A[i][j]+B[i][j];
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            cout<<C[i][j]<<endl;
        }
    }
    return 0;
}