// Program 7: Add two matrices of the same dimensions
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, columns;
    cout << "Enter rows and columns: ";
    cin >> rows >> columns;
    if (rows <= 0 || columns <= 0) { cout << "Dimensions must be positive.\n"; return 0; }

    vector<vector<int>> first(rows, vector<int>(columns));
    vector<vector<int>> second(rows, vector<int>(columns));
    cout << "Enter first matrix:\n";
    for (auto& row : first) for (int& value : row) cin >> value;
    cout << "Enter second matrix:\n";
    for (auto& row : second) for (int& value : row) cin >> value;

    cout << "Sum matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++)
            cout << first[i][j] + second[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}
