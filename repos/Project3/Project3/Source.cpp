#include<iostream>
using namespace std;
int main()
{
	//interactive code!
	//x is a variable that can store integer numbers
	int x;
	int y;

	cout << "Give me a number: " << endl;
	cin >> x;
	cout << "Another number" << endl;
	cin >> y;

	//we're adding 10 to the value of x
	//right hand side gets evaluated FIRST
	x = x + 10;

	cout << "I just added 10 to x, it looks like: " << x << endl;


	return 1;
}