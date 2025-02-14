#include <iostream>
using namespace std;

int main() {
    
    int number = 42;
    int* ptr = &number;
    cout << "Value of number: " << number << endl;
    cout << "Address of number: " << &number << endl;
    cout << "Pointer value (address): " << ptr << endl;
    cout << "Value at pointer (dereferencing): " << *ptr << endl;
    *ptr = 100;
    cout << "Updated value of number: " << number << endl;
    return 0;
}

