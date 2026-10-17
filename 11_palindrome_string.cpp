// Check whether a string is a palindrome using strrev()
#include <iostream>
#include <cstring>
using namespace std;

// Portable implementation because strrev() is not standard C++.
char* strrev(char text[]) {
    int left = 0, right = static_cast<int>(strlen(text)) - 1;
    while (left < right) {
        char temp = text[left];
        text[left] = text[right];
        text[right] = temp;
        left++;
        right--;
    }
    return text;
}

int main() {
    char text[200], original[200];

    cout << "Enter a string: ";
    cin.getline(text, 200);
    strcpy(original, text);
    strrev(text);

    if (strcmp(original, text) == 0)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}
