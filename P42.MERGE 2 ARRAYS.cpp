#include <iostream>
using namespace std;
int main() {
    int arr1[] = {1, 3, 5, 7}; // First array
    int arr2[] = {2, 4, 6, 8}; // Second array
    int size1 = sizeof(arr1) / sizeof(arr1[0]); // Size of the first array
    int size2 = sizeof(arr2) / sizeof(arr2[0]); // Size of the second array
    int mergedSize = size1 + size2; // Size of the merged array
    int mergedArray[mergedSize]; // Array to store the merged result
    // Copy elements from the first array
    for(int i = 0; i < size1; i++) {
        mergedArray[i] = arr1[i];
    }
    // Copy elements from the second array
    for(int i = 0; i < size2; i++) {
        mergedArray[size1 + i] = arr2[i];
    }
// Print the merged array
    cout << "Merged Array: ";
    for(int i = 0; i < mergedSize; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;
    return 0;
}

