#include <iostream>
#include <fstream>
using namespace std;

struct Car {
    char carModel[20];
    int price;
};

int main() {
    Car myCar;
    char choice;

    // Append to file
    ofstream outFile("outcar.dat", ios::binary | ios::app);

    do {
        cin.ignore(); // To clear newline from previous input
        cout << "Enter car model: ";
        cin.getline(myCar.carModel, 20);

        cout << "Enter car price: ";
        cin >> myCar.price;
        cin.ignore(); // Clear newline after entering price

        outFile.write(reinterpret_cast<char*>(&myCar), sizeof(myCar));

        cout << "Add another car? (y/n): ";
        cin >> choice;
        cin.ignore();
    } while (choice != 'n');

    // Read all cars
    Car myCar2;
    ifstream inFile("outcar.dat", ios::binary);

    cout << "\nData read from Binary file:\n";
    while (inFile.read(reinterpret_cast<char*>(&myCar2), sizeof(myCar2))) {
        cout << "Car Model: " << myCar2.carModel << endl;
        cout << "Car Price: " << myCar2.price << endl;
        cout << "-----------------------\n";
    }

    inFile.close();
    outFile.close();
    return 0;
}

