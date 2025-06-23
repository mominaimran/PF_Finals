#include<fstream>
#include<iostream>
#include<string>
using namespace std;

struct Person{
	char name[25];
	int age;
};

int main(){
	Person per;
	char ch;
	ofstream file("record.txt", ios::ate | ios::binary|ios::out);

	do{
		cin.ignore(10, '\n');
		puts(" Enter Name:");
		fgets(per.name, 25, stdin);
		puts("\n Enter Age:");
		cin >> per.age;
		cout << "\n Enter record for another person y/n:  ";
		cin >> ch;
		file.write(reinterpret_cast<char*>(&per), sizeof(per));
	} while (ch != 'n');

	file.close();

	ifstream file1;
	file1.open("record.txt", ios::in | ios::binary);

	Person perR;

	while (file1.read(reinterpret_cast<char*>(&perR), sizeof(Person)))
	{
		cout << endl << "name: " << perR.name << endl;
		cout << "age:  " << perR.age << endl << endl;
	}

	cout << endl;
	return 0;

}