#include <iostream>
using namespace std;

int main() {
	/*FOR LOOP:
	A loop has a concise syntax. for (initial action; loop continuation condition; action after iteration)
	*/
	//i++ = i=i+1
	for (int i = 0; i < 3; i++) {
		cout << "Halloween is almost here!" << endl
	}
	//What does the above statement do? 

	//Because there is only one statement in the body of the loop, it can also be written 
	for (int i = 0; i < 3; i++)
		cout << "Alternative 2" << endl;

	//Example 1: How many times is the 
	for (int i = 11; i < 15; i++)
		cout << "Thanksgiving is my fav holiday" << endl;

	/* WHILE LOOP:
	A while loop executes statments
	*/

	//Example 1:
	int count = 0;
	while (count < 10)
	{
		//loop body
		cout << "I love programming" << endl;
		count++;
	}

	//Example 2:
	int sum = 0; i = 1;
	while (i < 5)
	{
		sum = sum + i;
		i++;
	}

	cout << "Sum is " << sum << endl; // we should get sum = 10

}