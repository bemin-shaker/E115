#include<iostream>
using namespace std;

void printGreeting() {
	cout << "Hello! How are you doing today? " << endl;
}

void divideNumbers(float x, float y) {
	float result;
	result = x / y;
	if (y == 0) {
		cout << "Cannot perform division" << endl;
	}
	else
	{
		cout << "The quotient is: " << result << endl;
	}
}

int factorial(int num) {
	int result = 1;
	int i;
	if (num <= 0)
	{
		cout << "Sorry, please enter a positive number" << endl;
	}
	else 
	{
		for (i = 1; i <= num; i++) {
			result *= i;
		}
	}
	return result;
}

void fibonacci(int runTime) {
	int num1 = 0;
	int num2 = 1;
	if (runTime < 1) {
		cout << "Enter a number greater than 0" << endl;
	}
	else if (runTime == 1) {
		cout << "0" << endl;
	}
	else if (runTime == 2) {
		cout << "0 1 " << endl;
	}
	else {
		cout << "0 1 ";
		for (int i = 3; i <= runTime; i++) {
			if (num1 <= num2) {
				num1 += num2;
					cout << num1 << " ";
			}
			else {
				num2 += num1;
				cout << num2 << " ";
			}
		}
	}
}

int main()
{
	printGreeting();

	float p, q;
	cout << "Give me a number: " << endl;
	cin >> p;
	cout << "Give me another number: " << endl;
	cin >> q;
	divideNumbers(p, q);

	int n;
	cout << "Enter a number to find its factorial and the first terms of the Fibonacci series : " << endl;
	cin >> n;
	cout << "The factorial of the number is: " << factorial(n) << endl;

	int choice;
	cin >> choice;
	cout << "The first terms of the fibonacci series based on the number you input are: " << endl;
	fibonacci(choice);

	return 1;
}