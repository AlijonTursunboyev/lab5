#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int data) : data(data), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    
    void createList() {
        int value;
        cout << "Enter integers : "<<endl;
        while (cin >> value) {
            push(value); 
        }
        cin.clear(); 
    }

    
    void push(int value) {
        Node* new_node = new Node(value);
        new_node->next = head;
        head = new_node;
    }

    
    int getLength(Node* curr) {
        if (curr == nullptr) {
            return 0;
        } else {
            return 1 + getLength(curr->next);
        }
    }

    
    void printList() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    list.createList();

    cout << "Length of the list: " << list.getLength(list.head) << endl;

    return 0;
}
