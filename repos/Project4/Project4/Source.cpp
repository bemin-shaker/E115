#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE); //This lets us to chane colors of different output lines below
	
	SetConsoleTextAttribute(color, 1); //This commans set the following output line to the color blue
	cout << "Hello! My name is Bemin Shaker." << endl;

	SetConsoleTextAttribute(color, 5);
	cout << "I am a software engineering major." << endl;

	SetConsoleTextAttribute(color, 10);
	cout << "I am a freshman at Stevens." << endl;

	SetConsoleTextAttribute(color, 4);
	cout << "I am so excited to learn programming this semester." << endl;

	SetConsoleTextAttribute(color, 6);
	cout << "I hope to learn a lot from this class and also to have fun!!!." << endl;

	return 0;

}