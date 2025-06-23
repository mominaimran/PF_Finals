#include <iostream>
using namespace std;

int main() {
    int x = 10;
    float y = 5.2;

    void* ptr = &y;
    void* pointer = &x;

    cout << "ptr: " << ptr << endl;
    cout << "*ptr: " << *(float*)ptr << endl;
    cout << "pointer: " << pointer << endl;
    cout << "*pointer: " << *(int*)pointer << endl;

    return 0;
}