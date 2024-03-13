#include<iostream>
using namespace std;
int scr1, scr2, scr3;
void first(){
    void second();
    float avg;
    avg = (scr1 + scr2 + scr3) / 3;
    cout << "\nAverage score is: " << avg;
    second(); 
}
void second(){
    if(scr1 < scr2 && scr1 < scr3)
        cout << "\n" << scr1 << " is the smallest score.";
    else if(scr2 < scr1 && scr2 < scr3)
        cout << "\n" << scr2 << " is the smallest score.";
    else
        cout << "\n" << scr3 << " is the smallest score.";
}
int main(){
    cout << "\nEnter the scores in three tests: ";
    cin >> scr1 >> scr2 >> scr3;
    first();
    return 0;
}