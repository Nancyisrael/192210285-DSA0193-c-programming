#include <iostream>
#include <string>
using namespace std;
string reverseString(string str) {
    string reversed = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string reversedStr = reverseString(str);

    cout << "Reversed string: " << reversedStr << endl;

    return 0;
}

