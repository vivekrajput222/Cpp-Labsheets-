// Copy a string and compare two strings
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char first[200], second[200], copied[200];

    cout << "Enter first string: ";
    cin.getline(first, 200);
    cout << "Enter second string: ";
    cin.getline(second, 200);

    strcpy(copied, first);

    if (strcmp(copied, second) == 0) {
        cout << "Both strings are equal." << endl;
    } else {
        cout << "Strings are not equal." << endl;
    }
    return 0;
}
