// Lab1Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x;
	int found = 1;
	int guesses = 5;

	int random_integer = rand();
	
	do { 
		if (guesses > 0) {
			cout << "guess the number" << endl;
			cin >> x;
			guesses = guesses - 1;
			if (x == random_integer) {
				found = 2;
			}
			else if (x > random_integer) {
				cout << "Lower!" << endl;
			}
			else {
				cout << "Higher!" << endl;
			}
		}
		else if (guesses == 0) {
			found = 3;
		}
	} while (found == 1);
	
	if (found == 2) {
		cout << "Correct!" << endl;
	}

	else {
		cout << "Out of tries!" << endl;
	}
	system("pause");

    return 0;
}

