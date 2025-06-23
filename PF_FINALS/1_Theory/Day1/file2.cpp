#include <iostream>
using namespace std;

struct Student{
    string name;
    string regNo;
    float GPA;
    int marks[5];
};

int main() {
    Student s[2];
    for(int i=0; i<2; i++){
        cout << "Enter name of student " << i+1 << " :";
        cin >> s[i].name;
        cout << "Enter Reg No:";
        cin >> s[i].regNo;
        cout << "Enter GPA:";
        cin >> s[i].GPA;
        cout << "Enter marks obtained in each subject" << endl;
        for(int j=0; j<5; j++){
            cout << "Marks of sub " << j+1 << ":";
            cin >> s[i].marks[j];
        }
    }
    for(int i=0; i<2; i++){
        cout << "----------------------------" << endl;
        cout << "name of student: " << s[i].name << endl;
        cout << "Reg No:" << s[i].regNo << endl;
        cout << "GPA:" << s[i].GPA << endl;
        for(int j=0; j<5; j++){
            cout << "Marks of sub " << j+1 << ": " << s[i].marks[j] << endl;
        }
    }

    return 0;
}