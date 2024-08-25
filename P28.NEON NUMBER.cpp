#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int square = num * num; // Calculate the square of the number
    int sum = 0;

    // Calculate the sum of the digits of the square
    while (square > 0) {
        sum += square % 10; // Add the last digit to sum
        square = square / 10; // Remove the last digit
    }

    // Check if the sum of the digits equals the original number
    if (sum == num) {
        cout << num << " is a Neon number." << endl;
    } else {
        cout << num << " is not a Neon number." << endl;
    }

    return 0;
}

