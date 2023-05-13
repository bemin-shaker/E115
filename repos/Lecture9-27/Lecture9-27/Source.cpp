#include<iostream>
using namespace std;

int main()
{
	char yesOrNo;
	float totalScore, optOutScore;

	cout << "Did you take the opt out test? (Y/N) " << endl;
	cin >> yesOrNo;

	if (yesOrNo == 'y' || yesOrNo == 'Y') {
		cout << "Sweet! How much did you score on that?" << endl;
		cin >> optOutScore; 
		if (optOutScore >= 80) {
			cout << "Congrats! You get an A. Chill now..." << endl;
			exit(1);
		}
	}

	cout << "Alright then, let's try this. What is your total score?" << endl;
	cin >> totalScore;
	

	if (totalScore >= 90) {
		cout << "Wow! You get an A" << endl;
	}
	else if (totalScore >= 80 && totalScore < 90) {
		cout << "Looks like a B" << endl;
	}
	else if (totalScore >= 70 && totalScore < 80) {
		cout << "That's a C" << endl;
	}
	else { 
		cout << "Looks like rough times bro :/" << endl;
	}

	return 1;
}


/*List of operators:
> greater than
< less than
>+ greater than or equal
<+ less than or equal
!= not equal
== equals
*/