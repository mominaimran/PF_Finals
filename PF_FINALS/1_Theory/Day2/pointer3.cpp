#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr1[SIZE] = {2,4,6,8,10};
    int arr2[SIZE] = {1,3,5,7,9};
    int arr3[SIZE];

    int *p1 = arr1;
    int *p2 = arr2;
    int *p3 = arr3;

    for(int i=0; i<5; i++){
        *(p3+i) = *(p2 + i) + *(p1 + i);
    }

    cout << "Sum of arrays" << endl;
    for(int i=0; i<5; i++){
        cout << *(p3+i) << " ";
    }


    return 0;
}