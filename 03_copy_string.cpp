// Copy one string into another using strcpy()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char original[200], copied[200];

    cout << "Enter a string: ";
    cin.getline(original, 200);

    strcpy(copied, original);
    cout << "Copied string = " << copied << endl;
    return 0;
}
