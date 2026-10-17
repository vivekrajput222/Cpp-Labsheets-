// Program 1: Input and display elements of a 1D array.

#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    cout << "Enter number of elements: ";
    cin >> n;
    if (n < 1 || n > 100) {
        cout << "Invalid size";
        return 0;
    }
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
    return 0;
}
