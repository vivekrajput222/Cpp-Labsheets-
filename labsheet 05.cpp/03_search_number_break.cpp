#include <iostream>
using namespace std;

int main() {
    int numbers[] = {4, 8, 12, 16, 20};
    int target;
    cout << "Enter number to search: ";
    cin >> target;

    bool found = false;
    for (int i = 0; i < 5; i++) {
        if (numbers[i] == target) {
            found = true;
            cout << "Number found at position " << i + 1 << endl;
            break;
        }
    }
    if (!found) cout << "Number not found";
    return 0;
}
