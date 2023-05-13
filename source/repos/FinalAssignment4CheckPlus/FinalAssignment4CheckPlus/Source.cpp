#include <iostream>
using namespace std;

int main() {
	float numOfHWs, numOfMidterms, numOfFinals;
	float HWsScore, MidtermsScore, FinalsScore;
	float sumOfHWs = 0, sumOfMidterms = 0, sumOfFinals = 0;
	float avgOfHWs, avgOfMidterms, avgOfFinals;
	float percentHWs, percentMidterms, percentFinals;


	cout << "What are the number of Homeworks, Midterms, and Finals? (In that order) " << endl;
	cin >> numOfHWs >> numOfMidterms >> numOfFinals;

	cout << "What is the weight (leave out the percent sign) of each category of HW, Midterms, and Finals? (In that order)> " << endl;
	cin >> percentHWs >> percentMidterms >> percentFinals;

	for (int i = 1; i <= numOfHWs; ++i)
	{
		cout << "Enter HW Scores " << i << ": ";
		cin >> HWsScore;
		sumOfHWs = HWsScore + sumOfHWs;
	}

	for (int i = 1; i <= numOfMidterms; ++i)
	{
		cout << "Enter Midterm Scores " << i << ": ";
		cin >> MidtermsScore;
		sumOfMidterms = MidtermsScore + sumOfMidterms;
	}

	for (int i = 1; i <= numOfFinals; ++i)
	{
		cout << "Enter Finals Scores " << i << ": ";
		cin >> FinalsScore;
		sumOfFinals = FinalsScore + sumOfFinals;
	}


	float avgScore;
	avgOfMidterms = sumOfMidterms / numOfMidterms;
	avgOfFinals = sumOfFinals / numOfFinals;
	avgOfHWs = sumOfHWs / numOfHWs;


	avgScore = ((percentHWs / 100) * avgOfHWs) + ((percentMidterms / 100) * avgOfMidterms) + ((percentFinals / 100) * avgOfFinals);

	if (avgScore >= 91) {
		cout << "The letter grade is A " << endl;
	}
	else if (avgScore >= 81 && avgScore < 91) {
		cout << "The letter grade is B " << endl;
	}
	else if (avgScore >= 71 && avgScore < 81) {
		cout << "The letter grade is C " << endl;
	}
	else {
		cout << "The letter grade is D. Too bad!!" << endl;
	}


	return 1;
}