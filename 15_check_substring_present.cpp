// Check whether one string is present in another using strstr()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char mainString[300], searchString[100];

    cout << "Enter main string: ";
    cin.getline(mainString, 300);
    cout << "Enter string to search: ";
    cin.getline(searchString, 100);

    if (strstr(mainString, searchString) != nullptr)
        cout << "String is present." << endl;
    else
        cout << "String is not present." << endl;

    return 0;
}
