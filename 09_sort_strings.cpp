// Arrange strings in alphabetical order using strcmp()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char words[5][100], temp[100];

    for (int i = 0; i < 5; i++) {
        cout << "Enter word " << i + 1 << ": ";
        cin.getline(words[i], 100);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(words[i], words[j]) > 0) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    cout << "Words in alphabetical order:" << endl;
    for (int i = 0; i < 5; i++)
        cout << words[i] << endl;

    return 0;
}
