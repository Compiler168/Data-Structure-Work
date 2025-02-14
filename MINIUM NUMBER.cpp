#include <iostream>
using namespace std;

int main() {
   
    const int rows = 3;
    const int cols = 4;
    
    int array[rows][cols] = {
        {12, 5, 3, 8},
        {7, 6, 14, 2},
        {9, 10, 1, 11}
    };
    
    int min = array[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (array[i][j] < min) {
                min = array[i][j];
            }
        }
    }

    // Output the result
    cout << "The minimum number in the 2D array is: " << min << endl;

    return 0;
}

