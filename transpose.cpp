#include<iostream>
#define N 4
using namespace std;
void transpose(int A[N][N], int B[N][N]){
    int i,j;
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            B[i][j] = A[j][i];
        }
    }
}
void printMatrix(int B[N][N]){
    int i,j;
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            cout << B[i][j] << " ";
        }
    cout << endl;
    }
}
int main(){
    system("cls");
    int A[N][N]={
        {1,1,1,1},
        {2,2,2,2},
        {3,3,3,3},
        {4,4,4,4}
    };
    int B[N][N];
    transpose(A,B);
    cout << endl << "A =" << endl;
    printMatrix(A);
    cout << endl << "Transpose of A =" << endl;
    printMatrix(B);
}