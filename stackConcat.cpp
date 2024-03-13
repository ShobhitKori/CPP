#include <iostream>
#include <stack>

void displayStack(std::stack<int> stack) {
    while (!stack.empty()) {
        std::cout << stack.top() << " ";
        stack.pop();
    }
    std::cout << std::endl;
}

int main() {
    std::stack<int> stack1;
    std::stack<int> stack2;
    std::stack<int> stack3;

    // Populating the first stack
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);

    // Populating the second stack
    stack2.push(4);
    stack2.push(5);
    stack2.push(6);

    // Copying elements into the third stack
    while (!stack1.empty()) {
        stack3.push(stack1.top());
        stack1.pop();
    }

    while (!stack2.empty()) {
        stack3.push(stack2.top());
        stack2.pop();
    }

    // Displaying the output stack
    displayStack(stack3);

    return 0;
}
