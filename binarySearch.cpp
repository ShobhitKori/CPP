//      BINARY SEARCH   
#include<iostream>
using namespace std;

int main(){
    system("cls");
    cout << "Enter 10 elements in ascending order: ";
    int ar[10];
    for(int i=0; i<10; i++)
        cin >> ar[i];
    cout << "\nEnter value to search: ";
    int search;
    cin >> search;
    int lft = 0, rt = 9, mid = (lft + rt)/2;
    while(lft <= rt){
        if(search < ar[mid])
            rt = mid-1;
        else if(search > ar[mid])
            lft = mid+1;
        else{
            cout << "Found at location " << mid+1;
            break;
        }
        mid = (lft + rt)/2;
    }
    if(lft > rt)
        cout << "\nNo such value exists.";
}