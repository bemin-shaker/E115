#include <iostream>
using namespace std;

int main() {
	float hw1, hw2, hw3, hw4, hw5, hw6, mid1, mid2, fin1, avghw, avgmid, avgscore;

	cout << "What are the scores for the six homework assignments? " << endl;
	cin >> hw1 >> hw2 >> hw3 >> hw4 >> hw5 >> hw6;
	cout << "What are the two midterm scores? " << endl;
	cin >> mid1 >> mid2;
	cout << "And, what is the one final score? " << endl;
	cin >> fin1;

	avghw = (hw1 + hw2 + hw3 + hw4 + hw5 + hw6) / 6;
	avgmid = (mid1 + mid2) / 2;
	avgscore = (avghw * 0.40) + (avgmid * 0.40) + (fin1 * 0.20);

	if (avgscore >= 91) {
		cout << "The letter grade is A " << endl;
	}
	else if (avgscore >= 81 && avgscore < 91) {
		cout << "The letter grade is B " << endl;
	}
	else if (avgscore >= 71 && avgscore < 81) {
		cout << "The letter grade is C " << endl;
	}
	else {
		cout << "The letter grade is D. Too bad!!" << endl;
	}



	return 1;
}