#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;
    int age;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    ofstream file("record.txt", ios::app);

    file << name << " " << age << endl;

    file.close();

    cout << "Record appended successfully.";

    return 0;
}