#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string name = "momina";
    cout << setw(10) << left << setfill('*') << name;
    return 0;
}