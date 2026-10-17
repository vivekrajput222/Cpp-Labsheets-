// Copy only the first five characters using strncpy()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char original[200], copied[6];

    cout << "Enter a string: ";
    cin.getline(original, 200);

    strncpy(copied, original, 5);
    copied[5] = '\0';

    cout << "First five characters = " << copied << endl;
    return 0;
}
