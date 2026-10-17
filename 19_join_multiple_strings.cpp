// Join multiple strings into one sentence using strcat()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char sentence[500] = "";
    char word[100];

    for (int i = 1; i <= 3; i++) {
        cout << "Enter part " << i << ": ";
        cin.getline(word, 100);

        if (i > 1)
            strcat(sentence, " ");
        strcat(sentence, word);
    }

    cout << "Complete sentence = " << sentence << endl;
    return 0;
}
