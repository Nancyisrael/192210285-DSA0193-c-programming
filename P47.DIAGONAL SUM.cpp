#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the square matrix (n x n): ";
    cin >> n;

    int matrix[n][n];

    // Input elements of the matrix
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    // Calculate sums of diagonals
    for (int i = 0; i < n; i++) {
        primaryDiagonalSum += matrix[i][i];           // Sum of primary diagonal
        secondaryDiagonalSum += matrix[i][n - 1 - i]; // Sum of secondary diagonal
    }

    // Display the results
    cout << "Sum of the primary diagonal: " << primaryDiagonalSum << endl;
    cout << "Sum of the secondary diagonal: " << secondaryDiagonalSum << endl;

    return 0;
}

