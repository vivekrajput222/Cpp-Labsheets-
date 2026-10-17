// Find the last occurrence of a character using strrchr()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[200], character;

    cout << "Enter a string: ";
    cin.getline(text, 200);
    cout << "Enter character to search: ";
    cin >> character;

    char* position = strrchr(text, character);
    if (position != nullptr)
        cout << "Last occurrence is at position " << position - text + 1 << endl;
    else
        cout << "Character not found." << endl;

    return 0;
}
