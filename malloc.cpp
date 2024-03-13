//program asks from the user number of countries. Then declare an array called GDP with as much size. Now read and print the Gross Domestic Products of the countries.
#include<iostream>
using namespace std;
int main(){
    system("cls");
    int *GDP;
    cout << "\nEnter the number of countries: ";
    int num;
    cin >> num;
    GDP = (int *)malloc(sizeof(int) * num);
    cout << "\nEnter GDP for " << num << " countries: \n";
    for(int i=0; i<num; i++){
        cout << "GDP[" << i << "] = ";
        cin >> GDP[i];
    }
    cout << "\n----------------------\n\n";
    for(int i=0; i<num; i++){
        cout << "GDP[" << i << "] = " << *(GDP + i) << endl;
    }
}