// Program 7: Input and display a 2D array (matrix).

#include <iostream>
using namespace std;

int main() {
    int a[10][10], r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;
    if (r < 1 || r > 10 || c < 1 || c > 10) return 0;
    cout << "Enter matrix elements: ";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) cin >> a[i][j];

    cout << "Matrix:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
