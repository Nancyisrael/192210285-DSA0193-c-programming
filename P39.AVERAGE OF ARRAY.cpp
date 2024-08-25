#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100]; // Declare a fixed size array

    // Input elements
    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0; // Initialize sum to 0

    // Calculate the sum
    for (int i = 0; i < n; i++) {
        sum += arr[i]; // Add each element to sum
    }

    double average = (double)sum / n; // Calculate average

    // Output average
    cout << "Average: " << average << endl;

    return 0;
}

