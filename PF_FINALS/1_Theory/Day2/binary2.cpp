#include <iostream>
#include <fstream>
using namespace std;

struct Book{
    char name[20];
    int price;
};

int main() {
    const int SIZE = 2;
    Book book[SIZE];
    for(int i=0; i<SIZE; i++){
        cout << "Enter book name: ";
        cin.getline(book[i].name,20);
        cout << "Enter price: ";
        cin >> book[i].price;
        cin.ignore();
    }

    //write to file
    ofstream outFile("outBook.dat", ios::binary);
    for(int i=0; i<SIZE; i++){
        outFile.write(reinterpret_cast<char*>(&book[i]), sizeof(Book));
    }
    outFile.close();

    //Read from file
    Book bookread;
    ifstream inFile("outBook.dat", ios::binary);
    cout << "\n--- Cars Read from File ---\n";

    int bookNum = 1;
    while (inFile.read(reinterpret_cast<char*>(&bookread), sizeof(bookread))) {
        cout << "Book #" << bookNum++ << ": " << bookread.name << ", Price: " << bookread.price << endl;
    }

    inFile.close();
    
    return 0;
}