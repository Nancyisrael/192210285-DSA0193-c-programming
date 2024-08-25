#include <iostream>
using namespace std;

int main() {
    int n, largest = -1, second_largest = -1;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i]; // Input elements

    for (int i = 0; i < n; i++) { // Find largest and second largest
        if (arr[i] > largest) { 
            second_largest = largest; 
            largest = arr[i]; 
        } else if (arr[i] > second_largest && arr[i] != largest) 
            second_largest = arr[i];
    }

    cout << "Second largest: " << second_largest << endl; // Output result
    return 0;
}

