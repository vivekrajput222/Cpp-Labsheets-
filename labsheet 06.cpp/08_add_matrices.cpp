// Program 8: Add two matrices.

#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10], r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;
    if (r < 1 || r > 10 || c < 1 || c > 10) return 0;
    cout << "Enter first matrix: ";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) cin >> a[i][j];
    cout << "Enter second matrix: ";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) cin >> b[i][j];

    cout << "Sum matrix:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) cout << a[i][j] + b[i][j] << " ";
        cout << endl;
    }
    return 0;
}
