#include<iostream>
using namespace std;


int main()
{
	int x;
	cout << "Please enter a number. " << endl;
	cin >> x;
	if (x % 2 == 0) {
		cout << "This is even." << endl;
	}
	else {
		cout << "This is odd" << endl;
	}
	
	return 1;
}