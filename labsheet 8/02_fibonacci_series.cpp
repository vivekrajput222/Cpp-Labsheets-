// Program 2: Print Fibonacci series using a function
#include <iostream>
using namespace std;

void printFibonacci(int terms) {
    int first = 0, second = 1;
    for (int i = 0; i < terms; i++) {
        cout << first << (i + 1 == terms ? '\n' : ' ');
        int next = first + second;
        first = second;
        second = next;
    }
}

int main() {
    int terms;
    cout << "How many terms? ";
    cin >> terms;
    if (terms <= 0) cout << "Enter a positive number of terms.\n";
    else printFibonacci(terms);
    return 0;
}
