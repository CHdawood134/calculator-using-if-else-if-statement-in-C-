#include <iostream>
using namespace std;
int main() {
		int UserNumber = 0;
		int counter = 0;
		cout << "Guess a Number?\n\n";
		cout << "Enter a Number between [1-100]:\n\n" << endl;
		cin >> UserNumber;

		int ComputerGuess = 0;
		

		do {
			
			ComputerGuess = rand() % 101;
			if (UserNumber >= 100) {
				cout <<"Please Enter Number between (1-100).\nYou Enter Invalid Number.\n\n" << endl;
				break;
			}
			
			cout << "My Guess is =" << ComputerGuess << endl;
			counter++;
			if (counter >= 50) {
				cout << "Computer target to guess the usernumber under 30 attempts \n\n "<< endl;
				break;

			}
		} while (ComputerGuess != UserNumber);
		if (ComputerGuess == UserNumber) {
			cout <<"Hurrah, computer discovered the user number successfully!\n\n"<< endl;
		
		}
		else {
			cout <<"Alas,Computer failed to Guess usernumber! \n\n " << endl;
		
		}

		cout <<"Number of Attempts = " << counter << endl;


	return 0;
}