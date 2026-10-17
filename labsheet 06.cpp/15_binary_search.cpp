// Program 15: Search an element using Binary Search.

#include <iostream>
using namespace std;

int main() {
    int n, a[100], key;
    cout << "Enter number of elements (sorted array): ";
    cin >> n;
    if (n < 1 || n > 100) return 0;
    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Enter element to search: ";
    cin >> key;

    int low = 0, high = n - 1, position = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] == key) { position = mid; break; }
        else if (a[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    if (position == -1) cout << "Element not found" << endl;
    else cout << "Element found at position " << position + 1 << endl;
    return 0;
}
