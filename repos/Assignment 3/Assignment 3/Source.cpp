#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{
	
	int x, y;

	float xx, yy;

	string sentence1, sentence2;

	cout << "Give me first integer number" << endl;
	cin >> x;
	cout << "Give me second integer number" << endl;
	cin >> y;
	cout << "The sum of these two numbers is: " << x + y << endl;
	cout << "The difference of these two numbers is: " << x - y << endl;
	cout << "The product of these two numbers is: " << x * y << endl;
	cout << "The quotient of these two numbers is: " << x / y << endl; 

	cout << "Give me a float number" << endl;
	cin >> xx;
	cout << "Give me a second float number" << endl;
	cin >> yy;
	cout << "The sum of these two floats is: " << xx + yy << endl;
	cout << "The difference of these two floats is: " << xx - yy << endl;
	cout << "The product of these two floats is: " << xx * yy << endl;
	cout << "The quotient of these two floats is: " << xx / yy << endl;

	cout << "Give me your first name" << endl;
	cin >> sentence1;
	cout << "Give me the grade you're in college" << endl;
	cin >> sentence2;
	cout << "Your name and grade is " << sentence1 + " " + sentence2 << endl;


	int num1, num2, num3;
	char oper, oper2;

	cout << "Now, here's a calculator that will give YOU the choice of operators!" << endl;
	cout << "Enter first number: " << endl;
	cin >> num1;
	cout << "Enter the operator of your choice (+,-,/,*)" << endl;
	cin >> oper;
	cout << "Enter second number: " << endl;
	cin >> num2;
	cout << "Enter second operator: " << endl;
	cin >> oper2;
	cout << "Enter third number: " << endl;
	cin >> num3;
	int result, result2;
	if (oper == '+') {
		result = num1 + num2;
	}
	else if (oper == '-') {
		result = num1 - num2;
	}
	else if (oper == '/') {
		result = num1 / num2;
	}
	else if (oper == '*') {
		result = num1 * num2;
	}
	else {
		cout << "Invalid :(";
	}


	if (oper2 == '+') {
		result2 = result + num3;
	}
	else if (oper2 == '-') {
		result2 = result - num3;
	}
	else if (oper2 == '/') {
		result2 = result / num3;
	}
	else if (oper2 == '*') {
		result2 = result * num3;
	}
	else {
		cout << "Invalid :(";
	}

	cout << "Result is: " << result2 << endl;
	return 0;
}