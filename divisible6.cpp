#include<iostream>
using namespace std;

int main(){
    void divisible_by_6(int);
    cout << "Enter number to check if it is divisible by 6: ";
    int num;
    cin >> num;
    divisible_by_6(num);
    system("pause>0");
}
void divisible_by_6(int num){
    if(num % 6 == 0)
        cout << endl << num << " is divisible by 6.";
    else
        cout << endl << num << " is not divisible by 6.";
}