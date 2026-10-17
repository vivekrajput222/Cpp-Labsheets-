// Remove all vowels from a string
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char text[300], result[300];
    int j = 0;

    cout << "Enter a string: ";
    cin.getline(text, 300);

    for (int i = 0; i < strlen(text); i++) {
        char ch = tolower(static_cast<unsigned char>(text[i]));
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
            result[j++] = text[i];
    }
    result[j] = '\0';

    cout << "String without vowels = " << result << endl;
    return 0;
}
