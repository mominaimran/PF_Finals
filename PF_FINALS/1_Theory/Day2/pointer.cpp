#include <iostream>
using namespace std;

int main() {
    int x = 20;
    int *ptr = &x; //&x means address of x

    cout << "Value of X = " << x << endl;
    cout << "ptr(address) = " << ptr << endl; //pointer(ptr) is just a variable holding address in the memory where value of x is stored
    cout << "*ptr(value at address) = " << *ptr << endl; //*ptr gives a value present at address ptr

    // (*) is a dereference operator
    return 0;
}