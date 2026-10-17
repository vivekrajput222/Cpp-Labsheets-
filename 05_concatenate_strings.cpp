// Join two strings using strcat()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char first[400], second[200];

    cout << "Enter first string: ";
    cin.getline(first, 200);
    cout << "Enter second string: ";
    cin.getline(second, 200);

    strcat(first, second);
    cout << "Combined string = " << first << endl;
    return 0;
}
