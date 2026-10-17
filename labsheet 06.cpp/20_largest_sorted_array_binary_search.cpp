// Program 20: Find the largest element in a sorted array using Binary Search.

#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    cout << "Enter size of sorted array: ";
    cin >> n;
    if (n < 1 || n > 100) return 0;
    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    int left = 0, right = n - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (a[mid] < a[right]) right = mid;
        else left = mid + 1;
    }
    // For a normally sorted array, the last element is the largest.
    cout << "Largest element = " << a[n - 1] << endl;
    return 0;
}
