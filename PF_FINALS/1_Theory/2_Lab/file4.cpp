#include <iostream>
using namespace std;

int main() {
    int arr1[2][3] = {{9,4,6}, {5,2,8}};
    int arr2[2][3] = {{3,2,4},{3,1,4}}; 
    int arr3[2][3]; 

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            arr3[i][j] = arr1[i][j] - arr2[i][j];
        }
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}