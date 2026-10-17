// Program 16: Count occurrences of an element using Linear Search.

#include <iostream>
using namespace std;

int main() {
    int n, a[100], key, count = 0;
    cout << "Enter number of elements: ";
    cin >> n;
    if (n < 1 || n > 100) return 0;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Enter element to count: ";
    cin >> key;

    for (int i = 0; i < n; i++)
        if (a[i] == key) count++;

    cout << "Occurrences = " << count << endl;
    return 0;
}
