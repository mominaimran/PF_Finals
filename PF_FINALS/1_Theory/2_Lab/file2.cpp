#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    int arr[20];
    srand(time(0));
    for(int i=0; i<20; i++){
        int randomNum = rand() % 50 + 1;
        arr[i] = randomNum;
    }
    cout << "---Random Number Array---" << endl;
    for(int i=0; i<20; i++){
        cout << arr[i] << " ";
    }
    int find;
    bool found = false;
    cout << " \n what number you want to find in the array: ";
    cin >> find;

    for(int i=0; i<20; i++){
        if(find == arr[i]){
            cout << "we have found " << find << " at index " << i << endl;
            found = true;
        }
    }
    if(!found){
        cout << "\nNot found!" << endl;
    }

    //Finding Min Max
    int min = arr[0];
    int max = arr[0];

    for(int i=0; i<20; i++){
        if(min > arr[i]){
            min = arr[i];
        }
        if(max < arr[i]){
            max = arr[i];
        }
    }
    
    cout << "Minimum element in the array: " << min << endl;
    cout << "Maximum element in the array: " << max << endl;
    

    return 0;
}