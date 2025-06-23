#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("in.txt");
    char ch;
    int count = 0;
    while(!inFile.eof()){
        inFile.get(ch);
        cout << ch;
        count++;
    }
    cout << ch << endl;
    cout << "Total characters in the file are " << count << endl;

    return 0;
}