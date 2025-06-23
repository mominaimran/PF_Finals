#include <iostream>
#include <string>
using namespace std;

int main() {
    string array[4] = {"zunii", "monaa", "zoon", "momina"};
    bool found = false;
    string key = "zunii";

    for(int i=0; i<4; i++){
        if(key == array[i]){
            found = true;
            cout << key << " found at index " << i << endl;
        }
    }
    

    return 0;
}