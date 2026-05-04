#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
    float gpa;
};

int main() {
    Student s1, s2;

    cout << "Enter First Student:\n";
    cout << "Name: ";
    cin >> s1.name;
    cout << "Roll: ";
    cin >> s1.roll;
    cout << "GPA: ";
    cin >> s1.gpa;

    cout << "\nEnter Second Student:\n";
    cout << "Name: ";
    cin >> s2.name;
    cout << "Roll: ";
    cin >> s2.roll;
    cout << "GPA: ";
    cin >> s2.gpa;

    if (s1.gpa > s2.gpa) {
        cout << "\n" << s1.name << " has higher GPA.\n";
    }
    else if (s2.gpa > s1.gpa) {
        cout << "\n" << s2.name << " has higher GPA.\n";
    }
    else {
        cout << "\nBoth students have equal GPA.\n";
    }

    return 0;
}
