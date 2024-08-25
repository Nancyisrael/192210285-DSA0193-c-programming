#include <iostream>
using namespace std;

int main() {
    int rows1, cols1, rows2, cols2;

    // Input dimensions of the first matrix
    cout << "Enter rows and columns for the first matrix: ";
    cin >> rows1 >> cols1;

    // Input dimensions of the second matrix
    cout << "Enter rows and columns for the second matrix: ";
    cin >> rows2 >> cols2;

    // Ensure the matrices can be multiplied
    if (cols1 != rows2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }

    int matrix1[rows1][cols1], matrix2[rows2][cols2], product[rows1][cols2];

    // Input elements for the first matrix
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Input elements for the second matrix
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Initialize the product matrix to zero
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            product[i][j] = 0;
        }
    }

    // Multiply the matrices
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the product of the two matrices
    cout << "Product of the two matrices:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

