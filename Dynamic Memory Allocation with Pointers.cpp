#include <iostream>
using namespace std;

int main() {
     int* ptr = NULL;
    ptr = new int;
    if (ptr == NULL) {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }
    *ptr = 25;
    cout << "Value stored in dynamically allocated memory: " << *ptr << endl;
    cout << "Address of dynamically allocated memory: " << ptr << endl;
    delete ptr;
    ptr = NULL;
    if (ptr == NULL) {
        cout << "Pointer is now null after memory deallocation." << endl;
    }

    return 0;
}

