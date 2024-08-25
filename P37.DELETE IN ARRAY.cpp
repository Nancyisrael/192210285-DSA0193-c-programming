#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[100]; // Declare an array with a fixed size

    // Input elements into the array
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int pos;
    cout << "Enter the position to delete the element (0 to " << n - 1 << "): ";
    cin >> pos;

    // Check if the position is valid
    if (pos < 0 || pos >= n) {
        cout << "Invalid position!" << endl;
    } else {
        // Shift elements to the left
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1]; // Move the next element to the current position
        }
        n--; // Decrease the size of the array

        // Output the updated array
        cout << "Array after deletion:" << endl;
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " "; // Print the elements
        }
        cout << endl; // New line after printing the array
    }

    return 0;
}

