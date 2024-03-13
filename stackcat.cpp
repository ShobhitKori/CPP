#include <iostream>
#include <stack>
using namespace std;
void displayStack(stack<int> stack){
    while(!stack.empty()){
        cout << stack.top() << endl;
        stack.pop();
    }
}
int main(){
    stack<int> stack1;
    stack<int> stack2;
    stack<int> stack3;
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    
    stack2.push(7);
    stack2.push(8);
    stack2.push(9);

    while(!stack1.empty()){
        stack3.push(stack1.top());
        stack1.pop();
    }
    while(!stack2.empty()){
        stack3.push(stack2.top());
        stack2.pop();
    }
    displayStack(stack3);
    return 0;
}