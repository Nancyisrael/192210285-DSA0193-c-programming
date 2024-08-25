#include <iostream>
using namespace std;
int main() {
    int size;  // Ask the user for the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;
    // Dynamically allocate memory for the array
    int* arr = new int[size];
    // Input values into the array
    cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    // Display the values in the array
    cout << "Array elements are: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Free the allocated memory
    delete[] arr;
    return 0;
}

