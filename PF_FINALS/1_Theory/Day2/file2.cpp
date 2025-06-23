#include <iostream>
#include <string>
using namespace std;

struct Student{
    string name;
    int batch;
    float GPA;
};

void displayStruct(Student s){
    cout << "------Student Info-----" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Batch: " << s.batch << endl;
    cout << "GPA: " << s.GPA << endl;
}

int main() {
    Student s1;
    cout << "Enter Name: ";
    cin >> s1.name;
    cout << "Enter Batch: ";
    cin >> s1.batch;
    cout << "Enter GPA: ";
    cin >> s1.GPA;

    displayStruct(s1);

    return 0;
}