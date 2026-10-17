#include <iostream>
using namespace std;

int main() {
    int terms, count = 0;
    long long first = 0, second = 1;
    cout << "How many terms? ";
    cin >> terms;

    while (count < terms) {
        cout << first << " ";
        long long next = first + second;
        first = second;
        second = next;
        count++;
    }
    return 0;
}
