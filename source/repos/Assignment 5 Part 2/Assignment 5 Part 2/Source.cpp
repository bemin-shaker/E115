#include <iostream>
#include <climits> 

using namespace std;
int main() {
	int min  = INT_MAX;
	int max = INT_MIN;
	

	int sum = 0; 
	int i = 1;

	while (i != -1) {
		cout << "Input number (input -1 to stop): " << endl;
		cin >> i;

		if (i != -1) {
			sum += i;
		}

		if (i > max && i != -1) {
			max = i;
			
		}

		if (i < min && i != -1) {
			min = i;
			
		}
	}

	

	cout << "Sum is: " << sum << endl;
	cout << "The maximum number is: " << max << endl;
	cout << "The minimum number is: " << min << endl;

	return 0;
}