// Program 11: Create and display multiple Car objects
#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    double price;

    void display() const {
        cout << "Brand: " << brand << ", Price: " << price << '\n';
    }
};

int main() {
    Car firstCar{"Toyota", 1200000};
    Car secondCar{"Hyundai", 950000};
    Car thirdCar{"Tata", 800000};

    firstCar.display();
    secondCar.display();
    thirdCar.display();
    return 0;
}
