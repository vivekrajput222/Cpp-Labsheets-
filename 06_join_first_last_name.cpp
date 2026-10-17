// Join first name and last name using strcat()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char firstName[200], lastName[100];

    cout << "Enter first name: ";
    cin.getline(firstName, 200);
    cout << "Enter last name: ";
    cin.getline(lastName, 100);

    strcat(firstName, " ");
    strcat(firstName, lastName);

    cout << "Full name = " << firstName << endl;
    return 0;
}
