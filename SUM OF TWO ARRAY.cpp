#include <iostream>
using namespace std;

int main() {
    // Define the size of the 2D array
    const int rows = 3;
    const int cols = 4;
    
    // Initialize the 2D array
    int array[rows][cols] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    int sum = 0;

    // Calculate the sum of the elements in the 2D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += array[i][j];
        }
    }

    // Output the result
    cout << "The sum of the 2D array is: " << sum << endl;

    return 0;
}

