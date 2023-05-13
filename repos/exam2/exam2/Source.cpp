#include<iostream>
using namespace std;

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



int main()
{

	int n;
	cout << "Enter a number to find its factorial and the first terms of the Fibonacci series : " << endl;
	cin >> n;
	cout << "The factorial of the number is: " << factorial(n) << endl;

	return 1;
}