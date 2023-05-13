#include<iostream>
using namespace std;

class VendingMachine {
public:
	//Attributes(look and feel)
	int sprite;
	int water;
	//Initialization 
	VendingMachine() {
		sprite = 5;
		water = 5;
	}
	//Functions
	void dispenceSprite() {
		if (sprite == 0) {
			cout << "Sorry theres no more sprite " << endl;
		}
		else {
			cout << "Here's your can of Sprite... " << endl;
			sprite--;
		}
		cout << "Here's your can of sprite... " << endl;
	}

	void dispenceWater() {
		cout << "Here's your favorite bottle of water.. " << endl;
	}
};


int main()
{
	int x;
	VendingMachine y;
	cout << "Vending machine created! It has: " << y.sprite << endl;
	y.dispenceSprite();
	y.dispenceSprite();
	y.dispenceSprite();
	y.dispenceSprite();
	y.dispenceSprite();
	y.dispenceSprite();
	y.dispenceSprite();
	y.dispenceSprite();

	return 1;
}