#include<iostream>
using namespace std;

int main(){
    int a = 10;
    float b = 20.6;
    void change(int *, float *);
    change(&a, &b);
    cout << "\na = " << a <<"\tb = " << b;
    system("pause>0");
}
void change(int *aa, float *bb){
    *aa += 5;
    *bb += 5;
}