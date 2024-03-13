#include<iostream>
using namespace std;

int main(){
    void calculate_si(int, float, float);
    cout << "\nEnter Principle amt, roi, years: ";
    int principle;
    float roi, years;
    cin >> principle >> roi >> years;

    calculate_si(principle, roi, years);
    system("pause>0");
}
void calculate_si(int p, float r, float n){
    int sum = (p * r * n)/100;
    cout << "\nSimple intrest is " << sum;
}