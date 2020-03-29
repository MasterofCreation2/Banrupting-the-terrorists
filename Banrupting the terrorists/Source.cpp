#include <iostream>

using namespace std;

//These are up here because the functions would have to be up here if they did since main is the first function to be called
//This is for Original values function
void orginalValues(int userAcc, int terrAcc);
//This is for the hacked values function
void hackedValues(int& userAcc, int& terrAcc);

int main()
{
	//**********Original Swap Values**********//
	
	//This is for the user account amount
	int userAccount = 20000;
	//This is for the terrist acount amount
	int terroristAccount = 50000000;
	//These are the outputs for the original values
	cout << "Orignal Account Balance\n";
	//This displays the users current balance
	cout << "Account Balance for user is: " << userAccount << "\n";
	//This displays the terrorists current balance
	cout << "Account Balance for terrorist is: " << terroristAccount << "\n\n";

	//**********Bad Swap Values**********//

	//This is to call the original values function
	void orginalValues(int userAcc, int terrAcc);

	//These are the out puts for the Bad swap display
	cout << "Account Balance Change Failure\n";
	//This is for calling the orignal values
	orginalValues(userAccount, terroristAccount);
	//This displays the userAccount amount for the user
	cout << "Account Balance for user is: " << userAccount << "\n";
	//This displays the terrAccount amount for the terrorist
	cout << "Account Balance for terrorist is: " << terroristAccount << "\n\n";

	//**********Good Swap Values**********//

	//This is to call the hacked values function
	void hackedValues(int& userAcc, int& terrAcc);

	//These display the hacked results.
	cout << "Account Balance Change Success\n";
	//This grabs the userAccount balance and the terrAccount balance.
	hackedValues(userAccount, terroristAccount);
	//This is the output of the user account
	cout << "Account Balance for user is: " << userAccount << "\n";
	//This is the output for the terrorist
	cout << "Account Balance for terrorist is: " << terroristAccount << "\n\n";

	//returns nothing
	return 0;
}

//This function is for the orignal values that are not flipped and kept the same
void orginalValues(int userAcc, int terrAcc)
{
	//this is for the values that are to be switched, but are acctually the same as the original values
	int accountChange = userAcc;

	userAcc = terrAcc;

	terrAcc = accountChange;
}

//This is for the swaped values that are flipped
void hackedValues(int& userAcc, int& terrAcc)
{
	//This is for changing the values/balances for the accounts
	int accountChange = userAcc;

	userAcc = terrAcc;

	terrAcc = accountChange;
}


