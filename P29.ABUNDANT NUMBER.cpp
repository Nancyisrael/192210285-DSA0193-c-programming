#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int sumOfDivisors = 0;

    // Calculate the sum of proper divisors
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sumOfDivisors += i; // Add the divisor to the sum
        }
    }

    // Check if the sum of divisors is greater than the original number
    if (sumOfDivisors > num) {
        cout << num << " is an Abundant number." << endl;
    } else {
        cout << num << " is not an Abundant number." << endl;
    }

    return 0;
}

