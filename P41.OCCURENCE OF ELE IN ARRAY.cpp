#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 3, 4, 4}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int count[size] = {0}; // Array to store the occurrence count

    // Count occurrences
    for(int i = 0; i < size; i++) {
        count[i] = 1; // Initialize count for each element
        for(int j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                count[i]++;
                arr[j] = -1; // Mark the counted element to avoid counting it again
            }
        }
    }

    // Print the occurrences
    for(int i = 0; i < size; i++) {
        if(arr[i] != -1) { // Only print unmarked elements
            cout << "Element " << arr[i] << " occurs " << count[i] << " times." << endl;
        }
    }

    return 0;
}

