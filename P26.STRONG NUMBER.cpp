#include <iostream>
using namespace std;

int main() {
    int num, originalNum;
    cout << "Enter a number: ";
    cin >> num;

    originalNum = num; // Store the original number
    int sum = 0;

    while (num > 0) {
        int digit = num % 10; // Get the last digit
        int factorial = 1;

        // Calculate factorial of the digit
        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }

        sum += factorial;   // Add factorial to the sum
        num = num / 10;     // Remove the last digit
    }

    // Check if the sum of factorials equals the original number
    if (sum == originalNum) {
        cout << originalNum << " is a Strong number." << endl;
    } else {
        cout << originalNum << " is not a Strong number." << endl;
    }

    return 0;
}

