#include <iostream>
using namespace std;

// Function to count the number of elements in a string
int countElements(string str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int length = countElements(str);

    cout << "Number of elements in the string: " << length << endl;

    return 0;
}

