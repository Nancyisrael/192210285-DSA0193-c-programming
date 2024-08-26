#include <iostream>
using namespace std;

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    double temp;
    int choice;

    cout << "Temperature Conversion" << endl;
    cout << "1. Convert Celsius to Fahrenheit" << endl;
    cout << "2. Convert Fahrenheit to Celsius" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(temp) << endl;
    } else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        cout << "Temperature in Celsius: " << fahrenheitToCelsius(temp) << endl;
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}

