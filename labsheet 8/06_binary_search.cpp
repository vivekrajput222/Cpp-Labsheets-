// Program 6: Search an element with binary search (array must be sorted)
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& values, int target) {
    int left = 0, right = static_cast<int>(values.size()) - 1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (values[middle] == target) return middle;
        if (values[middle] < target) left = middle + 1;
        else right = middle - 1;
    }
    return -1;
}

int main() {
    int count;
    cout << "Enter number of sorted elements: ";
    cin >> count;
    if (count <= 0) { cout << "Count must be positive.\n"; return 0; }

    vector<int> values(count);
    cout << "Enter elements in ascending order: ";
    for (int& value : values) cin >> value;

    int target;
    cout << "Enter element to search: ";
    cin >> target;
    int index = binarySearch(values, target);
    if (index == -1) cout << "Element not found.\n";
    else cout << "Element found at position " << index + 1 << ".\n";
    return 0;
}
