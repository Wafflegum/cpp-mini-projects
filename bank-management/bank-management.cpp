#include <iostream>
#include <string>
using namespace std;

int main(){
	struct {
		string firstName;
	string lastName;
		float balance;
	} account;

	cout << "Create an account" << "\n";
	cout << "\n";

	cout << "Enter your first name: ";
	cin >> account.firstName;
	
	cout << "Enter your last name: ";
	cin >> account.lastName;

	cout << "Enter your Initial Deposit: ";
	cin >> account.balance;

	cout << endl;

	bool loggedIn;
	if(!account.firstName.empty()) {
		loggedIn = true;
	}

	cout << "Welcome " << account.firstName << "\n";
	
	int action;
	while(loggedIn) {
		cout << "--------------------------------------------" << endl;
		cout << "Choose your action" << endl;
		cout << "1. Show your info" << endl;
		cout << "2. Deposit" << endl;
		cout << "3. Withdraw" << endl;
		cout << "4. Exit" << endl;	
		cout << "--------------------------------------------" << endl;
	
		cin >> action;
		switch (action){
			case 1:
				cout << "Name: " << account.firstName << " " << account.lastName << endl;
				cout << "Balance: " << account.balance << endl;
				action = 0;
				break;
			case 2:
				cout << "Enter the amount you want to deposit: ";
				float x;
				cin >> x;
				account.balance += x;
				break;
			case 3:
				cout << "Enter the amount you want to withdraw: ";
				float y;
				cin >> y;
				account.balance -= y;
				break;
			case 4:
				continue;
				break;

		}
	}

	return 0;
}
