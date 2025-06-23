#include <iostream>
using namespace std;

void sum(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    cout << "Sum of array: " << sum;
}

int main() {
    int SIZE;
    cout << "Enter size of an array: ";
    cin >> SIZE;
    int arr[SIZE];
    
    cout << "Enter elements of an array: ";
    for(int i =0; i< SIZE; i++){
        cin >> arr[i];
    }

    sum(arr, SIZE);

    return 0;
}