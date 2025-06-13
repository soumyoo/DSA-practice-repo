#include<iostream>
using namespace std;

int main() {
    int rows = 3;
    int* jaggedArr[3];

    // Allocate rows of different sizes
    jaggedArr[0] = new int[2];  // 2 columns
    jaggedArr[1] = new int[4];  // 4 columns
    jaggedArr[2] = new int[3];  // 3 columns

    // Fill the jagged array with values
    int count = 1;
    for (int i = 0; i < rows; i++) {
        int cols = (i == 0) ? 2 : (i == 1) ? 4 : 3;
        for (int j = 0; j < cols; j++) {
            jaggedArr[i][j] = count++;
            cout << jaggedArr[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory
    delete[] jaggedArr[0];
    delete[] jaggedArr[1];
    delete[] jaggedArr[2];

    return 0;
}
