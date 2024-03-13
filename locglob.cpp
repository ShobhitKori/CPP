#include<iostream>
using namespace std;
int n = 100;
int main(){
    int n = 50;
    cout << n;
    {
        extern int n;
        cout << endl << n;
    }
    system("pause>0");
}