#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int& data) {
        this->data = data;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;
    LinkedList() {
        this->head = nullptr;
    }
    void add(int data) {
        Node* newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
            return;
        }
        Node* curr = head;
        while(curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = newNode;
    }
    void printlist() {
        if(head == NULL) {
            cout << "Empty list\n";
            return;
        }
        Node* curr = head;
        while(curr != nullptr) {
            cout << curr->data <<"->";
            curr = curr->next;
        }
        cout << "NULL" << endl;
    }
    void printReverse(Node* head) {
        if(head == nullptr) {
            return;
        }
        printReverse(head->next);
        cout << head->data << "->";
    }
};
int main() {
    // cout << "Hi";
    LinkedList list;
    list.add(1);
    list.add(2);
    list.add(3);
    list.add(4);
    list.add(5);
    // list.printlist();
    list.printReverse(list.head);
    return 0;
};
