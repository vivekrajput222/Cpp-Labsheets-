// Program 14: Function overloading in Calculator class
#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int first, int second) {
        return first + second;
    }

    double add(double first, double second) {
        return first + second;
    }
};

int main() {
    Calculator calculator;
    cout << "Integer addition: " << calculator.add(5, 7) << '\n';
    cout << "Decimal addition: " << calculator.add(2.5, 3.7) << '\n';
    return 0;
}
