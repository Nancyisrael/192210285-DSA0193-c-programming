#include <iostream>
using namespace std;

// Function to calculate the area of a circle
double areaOfCircle(double radius) {
    return 3.14159 * radius * radius;
}

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = areaOfCircle(radius);

    cout << "Area of the circle: " << area << endl;

    return 0;
}

