// Program 13: Sort student names using Bubble Sort.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[50], temp;
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    if (n < 1 || n > 50) return 0;
    cout << "Enter names (one word each): ";
    for (int i = 0; i < n; i++) cin >> names[i];

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (names[j] > names[j + 1]) {
                temp = names[j]; names[j] = names[j + 1]; names[j + 1] = temp;
            }

    cout << "Names in alphabetical order:" << endl;
    for (int i = 0; i < n; i++) cout << names[i] << endl;
    return 0;
}
