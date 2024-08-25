#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows for Pascal's triangle: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        int number = 1; // Start with 1 for each row

        // Print leading spaces
        for (int space = 0; space < rows - i - 1; space++) {
            cout << " ";
        }

        // Print the numbers in the row
        for (int j = 0; j <= i; j++) {
            cout << number << " ";
            number = number * (i - j) / (j + 1); // Calculate the next number
        }

        cout << endl; // Move to the next line after each row
    }

    return 0;
}

