// calulator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

	void sum() {
		int n1;
		int n2;
		cout << "Enter first number\n";
		cin >> n1;
		cout << "Enter second number\n";
		cin >> n2;
		cout << "the sum is=" << n1 + n2 << endl;
	}
	void subtract() {
		int n1;
		int n2;
		cout << "Enter first number\n";
		cin >> n1;
		cout << "Enter second number\n";
		cin >> n2;
		cout << "the subtraction is=" << n1 - n2 << endl;
	}
	void multiply() {
		int n1;
		int n2;
		cout << "Enter first number\n";
		cin >> n1;
		cout << "Enter second number\n";
		cin >> n2;
		cout << "the multiplication is=" << n1 * n2 << endl;

	}

	void division() {
		int n1;
		int n2;
		cout << "Enter first number\n";
		cin >> n1;
		cout << "Enter second number\n";
		cin >> n2;
		cout << "the division is=" << n1 / n2 << endl;

	}
int main(){
	while (true) {
		int n;
		cout << "press 1 for sum" << endl;
		cout << "press 2 for subtraction" << endl;
		cout << "press 3 for multiplication" << endl;
		cout << "press 4 for division" << endl;
		cin >> n;

		if (n == 1) {
			sum();
		}
		else if (n == 2) {
			subtract();
		}
		else if (n == 3) {
			multiply();
		}
		else if (n == 4) {
			division();
		}
		else {
			cout << "Invalid result\n";
		}
	}
		


}