#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Product{
    string name;
    float price;
    int qty;
};

void displayProducts(Product p[]){
     cout << "---Products Available---" << endl;
    for(int i=0; i<3; i++){
        cout << "product " << i+1 << ": " << p[i].name << endl;
        cout << "price: " << p[i].price << endl;
        cout << "quantity: " << p[i].qty << endl;
        cout << "------------------" << endl;
    }
}
Product highestStock(Product p[]){
     cout << "---Product with highest stock Available---" << endl;
    int maxIndex = 0;
    for(int i=1; i<3; i++){
            if(p[i].qty > p[maxIndex].qty){
                maxIndex = i;
            }
    }
    return p[maxIndex];
}



int main(){
    Product p[3];
    cout << "Enter Product Info" << endl;
    for(int i=0; i<3; i++){
        cout << "Enter product " << i+1 << ": ";
        cin >> p[i].name;
        cout << "Enter price: ";
        cin >> p[i].price;
        cout << "Enter quantity: ";
        cin >> p[i].qty;
    }

    ofstream outFile("inventory.txt");
    for(int i=0; i<3; i++){
        outFile << p[i].name << endl;
        outFile << p[i].price << endl;
        outFile << p[i].qty << endl << endl;
    }

    ifstream inFile("inventory.txt");
    for(int i=0; i<3; i++){
        inFile >> p[i].name;
        inFile >> p[i].price;
        inFile >> p[i].qty;
    }

    displayProducts(p);
    Product myP = highestStock(p);
    cout << "Name: " << myP.name << endl;
    cout << "Price: " << myP.price << endl;
    cout << "Stock Available: " << myP.qty << " pieces" << endl;

    return 0;
}