// Program 15: Abstraction using an abstract Shape class
#include <iostream>
#include <iomanip>
using namespace std;

class Shape {
public:
    virtual double area() const = 0; // Pure virtual function
    virtual ~Shape() = default;
};

class Circle : public Shape {
private:
    double radius;

public:
    explicit Circle(double value) : radius(value) {}
    double area() const override { return 3.141592653589793 * radius * radius; }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() const override { return length * width; }
};

int main() {
    double radius, length, width;
    cout << "Enter circle radius: ";
    cin >> radius;
    cout << "Enter rectangle length and width: ";
    cin >> length >> width;

    Circle circle(radius);
    Rectangle rectangle(length, width);
    cout << fixed << setprecision(2);
    cout << "Circle area: " << circle.area() << '\n';
    cout << "Rectangle area: " << rectangle.area() << '\n';
    return 0;
}
