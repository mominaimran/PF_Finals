#include <iostream>
using namespace std;

int main() {
    int arr1[2][2];
    int arr2[2][2];
    int arr3[2][2];

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout << "Enter [" << i+1 << "] [" << j+1 << "] element of array 1: ";
            cin >> arr1[i][j];
        }
    }
    
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout << "Enter [" << i+1 << "] [" << j+1 << "] element of array 2: ";
            cin >> arr2[i][j];
        }
    }
   
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
           arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    
    cout << "Sum of arrays you provided" << endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
           cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    int max = arr3[0][0];
    for(int i=1; i<2; i++){
        for(int j=1; j<2; j++){
            if(arr3[i][j]>max){
                max = arr3[i][j];
            }
        }
    }
    cout << "Maximum number in Sum Array: " << max;


    return 0;
}