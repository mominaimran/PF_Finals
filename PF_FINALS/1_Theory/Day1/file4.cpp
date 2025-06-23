#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Employees {
    int Id;
    string name;
    int salary;
};

int main() {
    ofstream outFile("output.txt");

    Employees employee[3];
    cout << "Enter data of 3 employees" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "Enter Id of employee " << i + 1 << ": ";
        cin >> employee[i].Id;
        cin.ignore();  

        cout << "Enter name of employee: ";
        getline(cin, employee[i].name);  

        cout << "Enter salary of employee: ";
        cin >> employee[i].salary;

        outFile << employee[i].Id << endl;
        outFile << employee[i].name << endl;
        outFile << employee[i].salary << endl << endl;
    }

    outFile.close();

    ifstream inFile("output.txt");
    Employees readEmp[3];
    for(int i=0; i<3; i++){
        inFile >> readEmp[i].Id;
        inFile.ignore();
        getline(inFile, readEmp[i].name);
        inFile >> readEmp[i].salary;
    }
    inFile.close();

    int maxIndex = 0;
    for(int i=1; i<3; i++){
        if(readEmp[i].salary > readEmp[maxIndex].salary){
            maxIndex = i;
        }
    }

    //Display all employees
    cout << "--- All Employees ---" << endl;
    for(int i=0; i<3; i++){
        cout << "Employee ID: " << readEmp[i].Id << endl;
        cout << "Name: " << readEmp[i].name << endl;
        cout << "salary: " << readEmp[i].salary << endl;
        cout << "---------------------------" << endl;
    }

    cout << "Employee with highest salary" << endl;
    cout << "ID: " << readEmp[maxIndex].Id << endl;
    cout << "Name: " << readEmp[maxIndex].name << endl;
    cout << "Salary: " << readEmp[maxIndex].salary << endl;

    return 0;
}
