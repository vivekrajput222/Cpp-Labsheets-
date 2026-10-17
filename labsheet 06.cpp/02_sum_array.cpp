// Program 2: Find the sum of all elements in a 1D array.

#include <iostream>
using namespace std;

int main() {
    int n, a[100], sum = 0;
    cout << "Enter number of elements: ";
    cin >> n;
    if (n < 1 || n > 100) return 0;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    cout << "Sum = " << sum << endl;
    return 0;
}
