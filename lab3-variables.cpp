#include <iostream>
using namespace std;

int main() {

    char grade;
    double fee;

    cout << "Enter Grade: ";
    cin >> grade;

    cout << "Enter Fee: ";
    cin >> fee;

    cout << endl;
    cout << "Student Information" << endl;
    cout << "-------------------" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Fee: " << fee << endl;

    return 0;
}
