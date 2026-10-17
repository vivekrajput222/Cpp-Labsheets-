// Find a substring using strstr()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[300], part[100];

    cout << "Enter main string: ";
    cin.getline(text, 300);
    cout << "Enter substring: ";
    cin.getline(part, 100);

    char* position = strstr(text, part);
    if (position != nullptr)
        cout << "Substring found at position " << position - text + 1 << endl;
    else
        cout << "Substring not found." << endl;

    return 0;
}
