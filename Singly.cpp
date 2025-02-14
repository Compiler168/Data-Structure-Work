#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertSingly(int value) {
    Node* newNode = new Node{value, NULL};
    if (!head) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void displaySingly() {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULLPT" << endl;
}

void cleanupSingly() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    cout << "Singly Linked List:\n";
    insertSingly(10);
    insertSingly(20);
    insertSingly(30);
    displaySingly(); 
    cleanupSingly();
    return 0;
}

