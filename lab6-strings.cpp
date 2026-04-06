#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName, lastName;

    cout << "Enter first name: ";
    cin >> firstName;

    cout << "Enter last name: ";
    cin >> lastName;

    // Concatenate with space
    string fullName = firstName + " " + lastName;

    cout << "Full Name: " << fullName;

    return 0;
}
