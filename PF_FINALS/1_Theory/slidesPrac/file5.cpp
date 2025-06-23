#include <iostream>
#include <string>
using namespace std;

int main() {
    char ch;
    cout << "Enter a string: ";
    cin.get(ch);
    cout << "First character read: " << ch << endl; 
    cin.get(ch);
    cout << "Second character read: " << ch << endl; 
    cin.putback(ch);
    cout << "After putback: " << ch << endl;
    ch = cin.peek();
    cout << "Peeked char: " << ch << endl;
    cin.ignore(4, '\n');
    cout << "After ignore: " << ch << endl;
    cin.get(ch);
    cout << "After ignore:" << ch;
}