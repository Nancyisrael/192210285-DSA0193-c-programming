#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];   
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum = 0; // Initialize sum to 0
    // Calculate the sum of all elements
    for (int i = 0; i < n; i++) {
        sum += arr[i]; // Add each element to sum
    }
    // Output the sum
    cout << "The sum of all elements in the array is: " << sum << endl;
   return 0;
}

