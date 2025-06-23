#include <iostream>
using namespace std;

struct Student{
    string name;
    string regNo;
    float GPA;
};

int main() {
    Student s1;
    cout << "Enter Name: ";
    cin >> s1.name;
    cout << "Enter Reg No. : ";
    cin >> s1.regNo;
    cout << "Enter GPA: ";
    cin >> s1.GPA;

    cout << "Name: " << s1.name << endl;
    cout << "Reg No: " << s1.regNo << endl;
    cout << "GPA: " << s1.GPA << endl;

    return 0;
}