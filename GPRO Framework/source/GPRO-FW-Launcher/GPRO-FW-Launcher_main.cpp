// GPRO-FW-Launcher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include "foo.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream> 


// to use cout<< change file name, and #include<iostream> 
using namespace std;

int main()
{
	char replay;
	bool game = true;
	while(game){
		bool loop = true;
		int guessedNum;
		cout << "----------Guessing game----------" << endl;
		cout << "Guess the number between 1 and 10" << endl;
	
		while (loop)
		{
		
			cout << endl << "Enter a Number: ";
			cin >> guessedNum;

			loop = foo(guessedNum);
			if (loop == false) {
				cout << "Correct!" << endl;
			}
			if (loop == true) {
				cout << "Guess again....." << endl;
			}
		}
		cout << endl << "Would you like to play again?(Y/N): ";
		cin >> replay;
		if (replay == 'N') {
			game = false;
			cout << "Thanks for playing!";
		}
		

	}
}

