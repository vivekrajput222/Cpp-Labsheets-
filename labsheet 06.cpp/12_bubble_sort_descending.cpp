// Program 12: Sort an array using Bubble Sort in descending order.

#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    cout << "Enter number of elements: ";
    cin >> n;
    if (n < 1 || n > 100) return 0;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] < a[j + 1]) {
                int temp = a[j]; a[j] = a[j + 1]; a[j + 1] = temp;
            }

    cout << "Descending order: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
    return 0;
}
