// Program 9: Swap two numbers using call by reference
#include <iostream>
using namespace std;

void swapNumbers(int& first, int& second) {
    int temp = first;
    first = second;
    second = temp;
}

int main() {
    int first, second;
    cout << "Enter two numbers: ";
    cin >> first >> second;
    swapNumbers(first, second);
    cout << "After swapping: " << first << ' ' << second << '\n';
    return 0;
}
