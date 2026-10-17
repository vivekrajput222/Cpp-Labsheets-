// Check whether two strings are anagrams
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char first[200], second[200];
    int count[256] = {0};

    cout << "Enter first string: ";
    cin.getline(first, 200);
    cout << "Enter second string: ";
    cin.getline(second, 200);

    for (int i = 0; first[i] != '\0'; i++) {
        unsigned char ch = static_cast<unsigned char>(first[i]);
        if (!isspace(ch))
            count[tolower(ch)]++;
    }

    for (int i = 0; second[i] != '\0'; i++) {
        unsigned char ch = static_cast<unsigned char>(second[i]);
        if (!isspace(ch))
            count[tolower(ch)]--;
    }

    bool anagram = true;
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            anagram = false;
            break;
        }
    }

    if (anagram)
        cout << "The strings are anagrams." << endl;
    else
        cout << "The strings are not anagrams." << endl;

    return 0;
}
