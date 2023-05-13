/*
Quick refresher on cout, intro to cin Min and Max Values of an integer 
(32 bits but only 31 are used for the value and the loading bit is used for sign)

variables
*/
#include <iostream>
using namespace std;

int main() {
	int num1;
	int num2;
	int result;
	//int maximum = INT_MAX;
	//float num2; //holds decimal places
	//double num3; //bigger float that can hold up 20 dec places

	cout << "Please enter a number" << endl;
	cin >> num1;
	cout << "The number is: " << num1 << endl;
	cout << "Please enter another number" << endl;
	cin >> num2;
	result = num1 + num2;

	result = result + 3;
	result += 3;

	cout << "Result is: " << result << endl;

	return 0;
}