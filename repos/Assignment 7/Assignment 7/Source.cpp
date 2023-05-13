#include<iostream>
using namespace std;

class VendingMachine {
public:
	float sprite, spriteCost;
	float water, waterCost;
	float pepsi, pepsiCost;
	float coke, cokeCost;

	float moneyIn, change;

	VendingMachine() {
		sprite = 5;
		spriteCost = 1.25;
		water = 5;
		waterCost = 1.25;
		pepsi = 5;
		pepsiCost = 1.25;
		coke = 5;
		cokeCost = 1.25;
	}

	void dispenceSprite() {
		if (sprite == 0) {
			cout << "Sorry there's no more sprite." << endl;
			cout << " ----- " << endl;
		}
		else {
			cout << "Please insert cash " << endl;
			cin >> moneyIn;
			if (moneyIn >= 1.25) {
				change = moneyIn - spriteCost;
				cout << "Success! Your change is: " << change << endl;
				cout << " ----- " << endl;
				sprite--;
			}
			else {
				cout << "Sorry you inserted an amount less than the price of the beverage :(" << endl;
				cout << " ----- " << endl;
			}

		}
	}

	void dispenceWater() {
		if (water == 0) {
			cout << "Sorry there's no more water." << endl;
			cout << " ----- " << endl;
		}
		else {
			cout << "Please insert cash " << endl;
			cin >> moneyIn;
			if (moneyIn >= 1.25) {
				change = moneyIn - waterCost;
				cout << "Success! Your change is: " << change << endl;
				cout << " ----- " << endl;
				water--;
			}
			else {
				cout << "Sorry you inserted an amount less than the price of the beverage :(" << endl;
				cout << " ----- " << endl;
			}
		}
	}

	void dispencePepsi() {
		if (pepsi == 0) {
			cout << "Sorry there's no more pepsi." << endl;
			cout << " ----- " << endl;
		}
		else {
			cout << "Please insert cash " << endl;
			cin >> moneyIn;
			if (moneyIn >= 1.25) {
				change = moneyIn - pepsiCost;
				cout << "Success! Your change is: " << change << endl;
				cout << " " << endl;
				pepsi--;
			}
			else {
				cout << "Sorry you inserted an amount less than the price of the beverage :(" << endl;
				cout << " -----" << endl;
			}
		}
	}

	void dispenceCoke() {
		if (coke == 0) {
			cout << "Sorry there's no more coke." << endl;
			cout << " ----- " << endl;
		}
		else {
			cout << "Please insert cash " << endl;
			cin >> moneyIn;
			if (moneyIn >= 1.25) {
				change = moneyIn - cokeCost;
				cout << "Success! Your change is: " << change << endl;
				cout << " ----- " << endl;
				coke--;
			}
			else {
				cout << "Sorry you inserted an amount less than the price of the beverage :(" << endl;
				cout << " ----- " << endl;
			}

		}
	}
};

int main()
{
	VendingMachine myObject;
	int choice;
	
	while (1)
	{
		cout << "Hello welcome to the Vending Machine!" << endl; 
		cout << "Press 1 for Sprite - $1.25" << endl; 
		cout << "Press 2 for Water - $1.25" << endl; 
		cout << "Press 3 for Pepsi - $1.25" << endl; 
		cout << "Press 4 for Coke - $1.25" << endl;

		cin >> choice;
		switch (choice)
		{
		case 1:
			myObject.dispenceSprite();
			break;
		case 2:
			myObject.dispenceWater();
			break;
		case 3:
			myObject.dispencePepsi();
			break;
		case 4:
			myObject.dispenceCoke();
			break;
		default:
			cout << "Invalid input, please try again" << endl; 
			cout << " ----- " << endl;
		}
	}


	return 1;
}