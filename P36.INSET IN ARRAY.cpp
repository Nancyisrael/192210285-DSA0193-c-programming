#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements ";
    cin >> n;

    int arr[n + 1]; // Declare an array of size n + 1 to accommodate the new element
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int pos, element;
    cout << "Enter the position (0 to " << n << ") to insert the new element: ";
    cin >> pos;
    cout << "Enter the element to insert: ";
    cin >> element;

    // Shift elements to the right to make space for the new element
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified position
    arr[pos] = element;

    // Output the updated array
    cout << "Array after insertion:" << endl;
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; // New line after printing the array

    return 0;
}

