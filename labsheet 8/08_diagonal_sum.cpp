// Program 8: Sum the main diagonal of a square matrix
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    cout << "Enter size of square matrix: ";
    cin >> size;
    if (size <= 0) { cout << "Size must be positive.\n"; return 0; }

    vector<vector<int>> matrix(size, vector<int>(size));
    cout << "Enter matrix elements:\n";
    for (auto& row : matrix) for (int& value : row) cin >> value;

    int sum = 0;
    for (int i = 0; i < size; i++) sum += matrix[i][i];
    cout << "Sum of main diagonal: " << sum << '\n';
    return 0;
}
