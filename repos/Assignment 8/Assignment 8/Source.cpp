#include<iostream>
using namespace std;

class OneClickBank {
private:
	float currentBalance;

public: OneClickBank()
{
	currentBalance = 1000;
}
	  void CheckBalance()
	  {
		  cout << "Your current balance is: " << currentBalance << endl;
	  }
	  void Deposit(float Money)
	  {
		  int choice;
		  cout << "Press 1 if you are depositing cash" << endl;
		  cout << "Press 2 if you are depositing a check" << endl;
		  cin >> choice;

		  switch (choice)
		  {
		  case 1:
			  if (Money >= 100 || Money < 0)
			  {
				  cout << "Cannot deposit $100 or more at one time" << endl;
			  }
			  else
			  {
				  currentBalance = currentBalance + Money;
			  }
			  break;

		  case 2:
			  if (Money > 0)
			  {
				  currentBalance = currentBalance + Money;
			  }
			  else {
				  cout << "Invalid transaction" << endl;
			  }
			  break;
		  default:
			  cout << "Invalid Input" << endl;
			  break;
		  }
	  }
	  void Withdraw(int Money)
	  {
		  if (Money > 0 && Money <= 200 && Money % 20 == 0 && currentBalance >= Money)
		  {
			  currentBalance = currentBalance - Money;
		  }
		  else
		  {
			  cout << "Invalid amount" << endl;
		  }
	  }
};

int main()
{
	OneClickBank myBank;
	float Deposit;
	int Withdraw;
	int choice;
	while (1)
	{
		cout << "Hello welcome to One Click Bank!" << endl;
		cout << "Press 1 to check your balance" << endl;
		cout << "Press 2 to deposit money" << endl;
		cout << "Press 3 to withdraw money" << endl;
		cout << "Press 4 to exit" << endl;

		cin >> choice;

		switch (choice)
		{
		case 1:
			myBank.CheckBalance();
			break;
		case 2:
			cout << "How much would you like to deposit?" << endl;
			cin >> Deposit;
			myBank.Deposit(Deposit);
			break;
		case 3:
			cout << "How much would you like to withdraw?" << endl;
			cin >> Withdraw;
			myBank.Withdraw(Withdraw);
			break;
		case 4:
			cout << "Thank you, goodbye!" << endl;
			exit(1);
		default:
			cout << "Invalid input, please try again" << endl;
		}
	}
}