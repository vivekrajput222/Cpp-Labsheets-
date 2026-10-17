// Check equality using case-sensitive strcmp()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char first[200], second[200];

    cout << "Enter first string: ";
    cin.getline(first, 200);
    cout << "Enter second string: ";
    cin.getline(second, 200);

    if (strcmp(first, second) == 0)
        cout << "Strings are equal." << endl;
    else
        cout << "Strings are different (case is checked)." << endl;

    return 0;
}
