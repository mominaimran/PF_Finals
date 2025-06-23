#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int SIZE = 10;

int main() {
    srand(time(0));

    int array[SIZE];
    for(int i=0; i<10; i++){
        int randNum = rand() % 100;
        array[i] = randNum;
    }
    for(int i=0; i<10; i++){
        cout << array[i] << " ";
    }
    

    return 0;
}