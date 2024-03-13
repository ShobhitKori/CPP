#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,4,3,12,8,10};
    int check_even(int *);
    
    cout << "\nTotal number of even elements are: " << check_even(arr);
    system("pause>0");
}
int check_even(int *ptr){
    int count=0;
    for(int n=0; n<6; n++){
        if(*(ptr+n)%2 == 0)
            count++;
    }
    return count;
}