#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("myInput.txt");
    ofstream outFile("myOutput.txt");

    const int SIZE = 200;
    char arr[SIZE];
    inFile.getline(arr, SIZE);
    outFile << arr;

    inFile.seekg(0);  // move to beginning
    cout << "Move get position: " << inFile.tellg() << endl;

    outFile.seekp(2);  // move to 2nd byte
    cout << "Move put position: " << outFile.tellp() << endl;


    return 0;
}