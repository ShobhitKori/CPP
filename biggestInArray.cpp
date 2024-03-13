#include<iostream>
#define MAX_SIZE 50
using namespace std;
int main(){
    int size;
    cout << "Enter the size of the array: (<50)";
    cin >> size;
    float values[MAX_SIZE];
    cout << "\nEnter the elements for array: ";
    for (int i = 0; i < size; ++i){
        cin >> values[i];
    }
    float smallest = values[0];
    for (int i = 1; i < size; ++i){
       if(values[i] < smallest){
            smallest = values[i];
       }
    }
    cout << "\nThe smallest element is: " << smallest;
    return 0;
}