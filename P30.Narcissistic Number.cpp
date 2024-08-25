#include <iostream>
#include <cmath> // For pow() function
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int originalNum = num; // Store the original number
    int sum = 0;
    int digits = 0;

    // Count the number of digits
    while (num > 0) {
        num /= 10;
        digits++;
    }

    num = originalNum; // Reset num to original value

    // Calculate the sum of the digits raised to the power of the number of digits
    while (num > 0) {
        int digit = num % 10; // Get the last digit
        sum += pow(digit, digits); // Add the powered digit to sum
        num /= 10; // Remove the last digit
    }

    // Check if the sum equals the original number
    if (sum == originalNum) {
        cout << originalNum << " is a Narcissistic number." << endl;
    } else {
        cout << originalNum << " is not a Narcissistic number." << endl;
    }

    return 0;
}

