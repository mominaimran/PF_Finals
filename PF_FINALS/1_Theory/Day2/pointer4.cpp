#include <iostream>
using namespace std;

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int x = 10, y =20;
    cout << "x and y before swap: " << x << " " << y << endl; 
    swap(&x, &y);
    cout << "x and y after swap: " << x << " " << y << endl;
    return 0;
}