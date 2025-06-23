#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("output.txt");
    ifstream inFile;

    string name, depart;
    int salary;

    inFile.open("input.txt");
    if(!inFile){
        cout << "Error opening file" << endl;
        return 1;
    }

    while (inFile >> name >> depart >> salary){
        outFile << "Name: " << name << '\n' << "Department: " << depart << '\n' << "Salary: " << salary << endl;    
    }

    return 0;
}