#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("myfile.txt");
    const int SIZE = 100;
    char array[SIZE];
    while(!inFile.eof()){
        inFile.getline(array, SIZE);
        cout << array;
    }

    inFile.close();

    return 0;
}