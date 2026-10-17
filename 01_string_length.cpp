// Find the length of a string using strlen()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[200];

    cout << "Enter a string: ";
    cin.getline(text, 200);

    cout << "Length of string = " << strlen(text) << endl;
    return 0;
}
