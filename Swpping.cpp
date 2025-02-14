#include <iostream>
#define MAX 100
using namespace std;

struct Stack {
    int arr[MAX]; 
    int top;      
};

void initializeStack(Stack& s) {
    s.top = -1; 
}

bool push(Stack& s, int value) {
    if (s.top >= MAX - 1) { 
        cout << "Stack Overflow! Cannot push " << value << "." << endl;
        return false;
    }
    s.arr[++s.top] = value; 
    
    cout << value << " pushed to stack." << endl;
    return true;
}

int pop(Stack& s) {
    if (s.top < 0) {
    	
        cout << "Stack Underflow! Cannot pop an element." << endl;
        return -1; // Return -1 to indicate an error
    }
    int poppedValue = s.arr[s.top--]; 
    cout << poppedValue << " popped from stack." << endl;
    return poppedValue;
}

void display(Stack& s) {
    if (s.top < 0) {
        cout << "Stack is empty!" << endl;
        return;
    }
    cout << "Stack elements: ";
    for (int i = s.top; i >= 0; i--) {
        cout << s.arr[i] << " ";
    }
    cout << endl;
}

int main() {
    Stack s; 
    initializeStack(s); 
    cout << "Performing Push Operations:\n";
    push(s, 10);
    push(s, 20);
    push(s, 30);
    display(s); 
    cout << "\nPerforming Pop Operations:\n";
    pop(s);
    display(s);
    pop(s);
    pop(s);
    pop(s); 
    cout << "\nFinal Display:\n";
    display(s); 

    return 0;
}

