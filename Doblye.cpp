#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* head = NULL;

void insertDoubly(int value) {
    Node* newNode = new Node{value, NULL, NULL};
    if (!head) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

void displayDoubly() {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void cleanupDoubly() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    cout << "Doubly Linked List:\n";
    insertDoubly(10);
    insertDoubly(20);
    insertDoubly(30);
    displayDoubly(); // Output: 10 <-> 20 <-> 30 <-> nullptr
    cleanupDoubly();
    return 0;
}

