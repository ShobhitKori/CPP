#include<iostream>
#define n 10
using namespace std;

int main(){
    system("cls");
    cout << "Enter elements of an array\n";
    int ar[n], temp;
    for(int i=0; i<n; i++)
        cin >> ar[i];
    cout << "\nArray before sorting: ";
    for(int i=0; i<n; i++)
        cout << ar[i] << " ";

    for(int i=0; i<n-1; i++){
        for(int j=0; j<(n-1-i); j++)
        {
            if(ar[j] > ar[j+1]){
                temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }   
    cout << "\nArray after sorting(ascending): ";
    for(int i=0; i<n; i++)
        cout << ar[i] << " ";
    system("pause>0");
}