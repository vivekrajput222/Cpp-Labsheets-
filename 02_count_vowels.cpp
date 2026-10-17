// Count vowels in a string
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char text[200];
    int vowels = 0;

    cout << "Enter a string: ";
    cin.getline(text, 200);

    for (int i = 0; i < strlen(text); i++) {
        char ch = tolower(static_cast<unsigned char>(text[i]));
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
    }

    cout << "Number of vowels = " << vowels << endl;
    return 0;
}
