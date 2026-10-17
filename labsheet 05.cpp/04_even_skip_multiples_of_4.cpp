#include <iostream>
using namespace std;

int main() {
    for (int i = 2; i <= 20; i += 2) {
        if (i % 4 == 0) continue; // Skip multiples of 4
        cout << i << " ";
    }
    return 0;
}
