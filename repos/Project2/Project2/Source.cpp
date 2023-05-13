#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute
	(hConsole, FOREGROUND_RED);
	cout << "Hello, this is E-115 class!" << endl;

	SetConsoleTextAttribute
	(hConsole, FOREGROUND_BLUE);
	cout << "My name is Bemin Shaker." << endl;

	SetConsoleTextAttribute
	(hConsole, FOREGROUND_GREEN);
	cout << "I'm majoring in Software Engineering." << endl;

	SetConsoleTextAttribute
	(hConsole, FOREGROUND_BLUE | FOREGROUND_RED);
	cout << "I am a Freshman at Stevens." << endl;

	SetConsoleTextAttribute
	(hConsole, FOREGROUND_GREEN | FOREGROUND_RED);
	cout << "I am excited to learn programming this semester!" << endl;



	//cout << "\n\nPress any key to exit program.....";
	//cin.get();
	return 0;

}
