#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int n = num;
    while (n != 1 && n != 4) {
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;   // Get the last digit
            sum += digit * digit; // Add the square of the digit to sum
            n = n / 10;           // Remove the last digit
        }
        n = sum; // Update n to be the sum of the squares of its digits
    }

    if (n == 1) {
        cout << num << " is a Happy number." << endl;
    } else {
        cout << num << " is not a Happy number." << endl;
    }

    return 0;
}

