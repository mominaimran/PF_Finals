#include <iostream>
using namespace std;

int main() {
    int arr1[3][2] = {{2,4}, {5,2}, {3,1}};
    int arr2[2][3] = {{3,2,4},{3,1,2}}; 
    int arr3[3][3];

    // Matrix Multiplication
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            arr3[i][j] = 0; // very important!
            for(int k=0; k<2; k++){ // because arr1 has 2 cols
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // Displaying result
    cout << "Result of Matrix Multiplication:\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr3[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
