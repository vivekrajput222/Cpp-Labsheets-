// Program 19: Implement Binary Search for floating-point numbers.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    double a[100], key;
    cout << "Enter size of sorted array: ";
    cin >> n;
    if (n < 1 || n > 100) return 0;
    cout << "Enter sorted decimal numbers: ";
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Enter number to search: ";
    cin >> key;

    int left = 0, right = n - 1, foundAt = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (fabs(a[mid] - key) < 0.000001) { foundAt = mid; break; }
        if (a[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    if (foundAt >= 0) cout << "Found at position " << foundAt + 1 << endl;
    else cout << "Not found" << endl;
    return 0;
}
