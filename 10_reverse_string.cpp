// Reverse a string (portable replacement for non-standard strrev())
#include <iostream>
#include <cstring>
using namespace std;

// Some compilers do not provide strrev(), so this function does the same job.
char* strrev(char text[]) {
    int left = 0;
    int right = static_cast<int>(strlen(text)) - 1;

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
    char text[200];

    cout << "Enter a string: ";
    cin.getline(text, 200);

    cout << "Reversed string = " << strrev(text) << endl;
    return 0;
}
