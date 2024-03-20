#include<iostream>
using namespace std;

void merge(int *arr, int low, int high, int mid) {
    int i = low, k = low, j = mid + 1, c[10];
    while(i <= mid && j <= high) {
        if(arr[i] < arr[j]) {
            c[k] = arr[i];
            k++;
            i++;
        } else {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while(i <= mid) {
        c[k] = arr[i];
        k++;
        i++;
    }
    while(j <= high) {
        c[k] = arr[j];
        k++;
        j++;
    }
    for(i=low; i<k; i++) {
        arr[i] = c[i];
    }
}


void mergeSort(int *arr, int low, int high) {
    int mid;
    if(low < high) {
        mid = low + (high-low)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, high, mid);
    }
}
int main() {
    int arr[30], num;
    cout << "Enter number of elements to be sorted: ";
    cin >> num;
    cout << "\nEnter " << num << " Elements: ";
    for(int i=0; i<num; i++) {
        cin >> arr[i];
    }
    mergeSort(arr, 0, num-1);
    cout << "\nArray after sorting: " << endl;
    for(int i=0; i<num; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
