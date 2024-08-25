#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows for diamond pattern: ";
    cin >> n;

    // Print the upper part of the diamond
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl; // Move to the next line
    }

    // Print the lower part of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl; // Move to the next line
    }

    return 0;
}

