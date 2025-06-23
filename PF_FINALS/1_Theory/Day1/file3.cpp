#include <iostream>
#include <fstream>
using namespace std;

struct Student{
    string name;
    string regNo;
    float GPA;
    int marks[5];
};

int main() {
    ofstream outFile("studentOut.txt");
    ifstream inFile("studentIn.txt");

    Student s[2];
    for(int i=0; i<2; i++){
        inFile >> s[i].name;
        inFile >> s[i].regNo;
        inFile >> s[i].GPA;
        for(int j=0; j<5; j++){
            inFile >> s[i].marks[j];
        }
    }

    
    for(int i=0; i<2; i++){
        outFile << "------------------------" << endl;
        outFile << "Student: " << s[i].name << endl;
        outFile << "Reg No: " << s[i].regNo << endl;
        outFile << "GPA obtained: " << s[i].GPA << endl;
        for(int j=0; j<5; j++){
            outFile << "Marks of sub " << j+1 << ": " << s[i].marks[j] << endl;
        }
    }

    outFile.close();
    inFile.close();

    return 0;
}