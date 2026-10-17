// Program 18: Implement Binary Search for integers.

#include <iostream>
using namespace std;

int main() {
    int n, a[100], key;
    cout << "Enter size of sorted array: ";
    cin >> n;
    if (n < 1 || n > 100) return 0;
    cout << "Enter sorted integers: ";
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Enter integer to search: ";
    cin >> key;

    int left = 0, right = n - 1, foundAt = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (a[mid] == key) { foundAt = mid; break; }
        if (a[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    if (foundAt >= 0) cout << "Found at position " << foundAt + 1 << endl;
    else cout << "Not found" << endl;
    return 0;
}
