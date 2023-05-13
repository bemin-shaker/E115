#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{
	int x; //int variables can store whole numbers
	float y; //this can store whole numbers, but also fractional values

	char c; //char can ONLY store one character
	string str;

	cout << "Give me a number: " << endl;
	cin >> x;
	y = sqrt(x);
	cout << "Square root of that number: " << y << endl;

	/*
	cout << "Press y for yes, and n for no" << endl;
	cin >> c;
	cout << "You pressed: " << c << endl;

	cout << "What is your name?" << endl;
	cin >> str;
	cout << "Nice to meet you, " << str << endl;

	
	cout << "What is the value of pi?" << endl;
	cin >> y;
	cout << "Value of pi is: " << y << endl;
	*/

	//l-value = r-value

	return 1;
}