// Find the first occurrence of a character using strchr()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[200], character;

    cout << "Enter a string: ";
    cin.getline(text, 200);
    cout << "Enter character to search: ";
    cin >> character;

    char* position = strchr(text, character);
    if (position != nullptr)
        cout << "First occurrence is at position " << position - text + 1 << endl;
    else
        cout << "Character not found." << endl;

    return 0;
}
