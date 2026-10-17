#include <iostream>
using namespace std;

int main() {
    int n;
    long long sum = 0;
    cout << "Enter N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) sum += 1LL * i * i;
    cout << "Sum of squares = " << sum;
    return 0;
}
