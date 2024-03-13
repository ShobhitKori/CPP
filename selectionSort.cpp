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
        for(int j=i+1; j<n; j++){
            if(ar[i] > ar[j]){
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    cout << "\nArray after sorting(ascending): ";
    for(int i=0; i<n; i++)
        cout << ar[i] << " ";
     system("pause>0");
}