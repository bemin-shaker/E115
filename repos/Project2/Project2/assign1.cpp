#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	system("Color 0A");
	cout << "Hello, this is E-115 class!" << endl;
	return 0;
	/*
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute //This allows us to change the color of the text
	(hConsole, FOREGROUND_RED); //Changes the following text output to red
	cout << "Hello, this is E-115 class!" << endl;

	SetConsoleTextAttribute
	(hConsole, FOREGROUND_BLUE);
	cout << "My name is Bemin Shaker." << endl;

	SetConsoleTextAttribute
	(hConsole, FOREGROUND_GREEN);
	cout << "I'm majoring in Software Engineering." << endl;

	SetConsoleTextAttribute
	(hConsole, FOREGROUND_BLUE | FOREGROUND_RED); //changes the following text output to a combination of blue and red which is purple
	cout << "I am a Freshman at Stevens." << endl;

	SetConsoleTextAttribute
	(hConsole, FOREGROUND_GREEN | FOREGROUND_RED);
	cout << "I am excited to learn programming this semester!" << endl;

	return 1;
	*/

}
