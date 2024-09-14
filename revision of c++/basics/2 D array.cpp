#include<iostream>
using namespace std;
int main(){
    int i,j;
    int A[2][3]={{2,3,4},{4,5,7}};
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            cout<<A[i][j]<<endl;
        }
    }
    return 0;
}