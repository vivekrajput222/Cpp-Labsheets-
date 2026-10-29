// Program 4: Copy one string into another using a function
#include <iostream>
#include <string>
using namespace std;

string copyString(const string& source) {
    return source;
}

int main() {
    string source;
    cout << "Enter a string: ";
    getline(cin, source);
    string destination = copyString(source);
    cout << "Copied string: " << destination << '\n';
    return 0;
}
