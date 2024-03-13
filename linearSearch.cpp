// Write a program that searches for multiple occurrences of a value. It should print all the locations where that value is present. Print number of occurrences also. 
// LINEAR search
#include<iostream>
using namespace std;

int main(){
    cout << "\nEnter the elements of array";
    int ar[10];
    for(int i=0; i<10; i++){
        cin >> ar[i];
    }
    cout <<"\nEnter the element to search";
    int search;
    cin >> search;
    int occurences = 0;
    for(int i=0; i<10; i++){
        if(ar[i] == search){
            cout << "\nMatch found at location " << i+1;
            occurences++;
        }
        
        else if(i == 10)
            cout << "\nSorry No match found.";
    }
    cout << "\nTotal number of occurences: " << occurences;
    return 0;
}