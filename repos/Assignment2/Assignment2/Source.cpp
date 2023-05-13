#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x;
	double y;
	double result;
	
	cout << "Input first number: " << endl;
	cin >> x;
	cout << "Input second number: " << endl;
	cin >> y;

	result = x + y;
	cout << "Result of the sum of the input numbers is: " << result << endl;

	result = x - y;
	cout << "Result of subtraction/difference of input values is: " << result << endl;

	result = x * y;
	cout << "Result of the product is: " << result << endl;

	result = x / y;
	cout << "Result of the quotient is: " << result << endl;

	result = pow(x, y);
	cout << "The result of first number raised to second number: " << result << endl;

	result = sqrt(x + y);
	cout << "Result of the square root of the sum of the first and second numbers: " << result << endl;

	result = sin(x);
	cout << "Result of the sine of the x value: " << result << endl;

	result = sin(y);
	cout << "Result of the sine of the y value: " << result << endl;

	result = sin(x + y);
	cout << "Result of the sine of the sum of the x and y values: " << result << endl;

	result = cos(x);
	cout << "Result of the cosine of the x value: " << result << endl;

	result = cos(y);
	cout << "Result of the cosine of the y value: " << result << endl;

	result = cos(x + y);
	cout << "Result of the consine of the sum of the x and y values: " << result << endl;

	return 0;
}