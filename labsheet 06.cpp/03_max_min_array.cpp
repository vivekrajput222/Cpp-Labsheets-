// Program 3: Find the maximum and minimum element in a 1D array.

#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    cout << "Enter number of elements: ";
    cin >> n;
    if (n < 1 || n > 100) return 0;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    int largest = a[0], smallest = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > largest) largest = a[i];
        if (a[i] < smallest) smallest = a[i];
    }
    cout << "Maximum = " << largest << endl;
    cout << "Minimum = " << smallest << endl;
    return 0;
}
