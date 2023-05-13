#include<iostream>
using namespace std;

//SIGNITURE OF FUNCTION:
//1. What new fxn RETURN?
//2. What new fxn NAME?
//3. What new fxn NEED?

void printThis() {
	cout << "Print this" << endl;
}

void add(int x, int y) {
	int result;
	result = x + y;
	cout << "Result is: " << result << endl;
}

int multiply(int x, int y) {
	int result;
	result = x*y;
	return result;
}

int main()
{
	int resultFromFxn; //variable that catches result from fxn

	int p, q;
	cout << "Give me number: " << endl;
	cin >> p;
	cout << "Give another number: " << endl;
	cin >> q;
	add(p, q);


	printThis(); //calling the function
	add(10, 20);
	
	resultFromFxn = multiply(p, q);
	cout << "Caught this from the function call: " << resultFromFxn << endl;

	resultFromFxn = multiply(multiply(1, 2), multiply(2, 3)); 
	cout << "Result from big multiply: " << resultFromFxn << endl;
	return 1;
}