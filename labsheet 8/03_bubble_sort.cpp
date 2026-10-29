// Program 3: Sort an array using bubble sort
#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& values) {
    for (size_t i = 0; i < values.size(); i++) {
        bool swapped = false;
        for (size_t j = 0; j + 1 < values.size() - i; j++) {
            if (values[j] > values[j + 1]) {
                int temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main() {
    int count;
    cout << "Enter number of elements: ";
    cin >> count;
    if (count <= 0) { cout << "Count must be positive.\n"; return 0; }

    vector<int> values(count);
    cout << "Enter " << count << " elements: ";
    for (int& value : values) cin >> value;

    bubbleSort(values);
    cout << "Sorted array: ";
    for (int value : values) cout << value << ' ';
    cout << '\n';
    return 0;
}
