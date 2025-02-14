#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int array1[] = {7, 1, 8, 3};
    int array2[] = {9, 2, 10, 12};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    int mergedArray[size1 + size2];

    for (int i = 0; i < size1; i++) {
        mergedArray[i] = array1[i];
    }
    for (int i = 0; i < size2; i++) {
        mergedArray[size1 + i] = array2[i];
    }
    sort(mergedArray, mergedArray + size1 + size2);
    cout << "Sorted Merged Array: ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << mergedArray[i] << " ";
    }
}


