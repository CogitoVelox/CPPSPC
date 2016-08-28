/* Edward Heeren
August 28, 2016©
Programming challenge for Ch. 4
*/

#include <iostream>
#include <cstdlib>

using namespace std;

main(){
	// Define variables
	int DieRoll;
	int Guess;
	int cnt1;
	int cnt2;

	// Initialize pseudo-random number generator
	srand((unsigned int)time (NULL));

	// Retreive user guess
	cout << "Please input a number between 1 and 6" << endl;
	cin >> Guess;
	
	// Create a random integer between 1 and 6
	DieRoll = rand()%6+1; 

	cout << "You guessed " << Guess << " and the random number was ";
	cout << DieRoll << endl;
	
	// "WINNER!" if Guess is the same as the random number
	if(Guess == DieRoll)
		cout << "WINNER!" << endl;
	
	// "DOUBLE WINNER!" if Dieroll is odd
	if(DieRoll%2 == 1)
		cout << "DOUBLE WINNER!" << endl;
	
	// "LUCKY PERSON" message if sum of guess and roll >=10, and dieroll is even
	if(DieRoll+Guess >= 10 && DieRoll%2 == 0)
		cout << "YOU ARE A VERY LUCKY PERSON!" << endl;
}

