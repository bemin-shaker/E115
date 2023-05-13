#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	string name, phone;
	char option;
	ofstream writer;
	cout << "Did you want to create a new contact? (y/n)" << endl;
	cin >> option;

	if (option == 'y') {
		cout << "Name? " << endl;
		cin >> name;
		cout << "Phone number? " << endl;
		cin >> phone;

		//1.create and or open file on your hard drive
		writer.open("MyContacts.txt", ios::app);
		//2.write stuff into this file
		writer << name << " " << phone << endl;
		//3.save and close that file
		writer.close();

		cout << "You have me: " << name << " " << phone << endl;
	}

	//======================================
	//READING STUFF FROM FILE
	ifstream reader;
	string newline;
	//1.open file 
	reader.open("MyContacts.txt");
	//2.read the contents 
	while (getline(reader, newline)) {
		cout << newline << endl;
	}
	//3.close the file 
	reader.close();

	return 1;
}