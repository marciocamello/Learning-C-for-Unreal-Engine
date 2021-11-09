// Learning C++ for Unreal Engine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <array>

#include "Player.h"
#include "Warrior.h"

using namespace std;

// Variables

// int power = 100;
// float health = 6.7f;
// double mana = 3.2;
// bool isDead = false;
// char one_Letter = 's';
// string player_name = "Carl the Great";
// cout << "The name of my character is: " << player_name;

// Math Operations With Variables

// float health = 100.0f;
// float damage = 2.0f;

// float remainingHealth = health - damage;

// float a = 7.0f;
// float b = 2.0f;

// float sum = a + b;
// float division = a / b;
// float multiplication = a * b;
// float subtraction = a - b;

// cout << "The sum of a and b is: " << sum << "\n";
// cout << "The subtraction of a and b is: " << subtraction << "\n";
// cout << "The division of a and b is: " << division << "\n";
// cout << "The multiplication of a and b is: " << multiplication << "\n";
// cout << "The remaining healh is: " << remainingHealth;

// Functions

//float SumTwoNumbers(float a, float b) {
//
//	float sum = a + b;
//
//	return sum;
//}
//
//float SubtractTwoNumbers(float a, float b) {
//
//	float subtraction = a - b;
//
//	return subtraction;
//}
//
//float DivideTwoNumbers(float a, float b) {
//
//	float division = a / b;
//
//	return division;
//}
//
//float MultiplicateTwoNumbers(float a, float b) {
//
//	float multiplication = a * b;
//
//	return multiplication;
//}
//
//// function tha doenst return a value and takes no arguments(parameters)
//void voidFunction () {}
//
//int intFunctionReturnZero() {
//	return 0;
//}
//
//void withParams(int a, int b) {}

//void learningFunctions() {
//
//	float health = 100.0f;
//	float damage = 2.0f;
//
//	float remainingHealth = health - damage;
//
//	float a = 7.0f;
//	float b = 2.0f;
//
//	float sum = SumTwoNumbers(a, b);
//	float division = DivideTwoNumbers(a, b);
//	float multiplication = MultiplicateTwoNumbers(a, b);
//	float subtraction = SubtractTwoNumbers(a, b);
//
//	cout << "The sum of a and b is: " << sum << "\n";
//	cout << "The subtraction of a and b is: " << subtraction << "\n";
//	cout << "The division of a and b is: " << division << "\n";
//	cout << "The multiplication of a and b is: " << multiplication << "\n";
//}

// Conditional Statements

//int a = 5;
//
//if(a > 1) {
//}else if (a < 1) {
//}else {}
//
//switch (a)
//{
//case 1:
//	cout << "1";
//	break;
//default:
//	break;
//}

// Loops

//void SomeFunction(){
//
//	cout << "Printed From Loop: " << endl;
//}


/*for (int i = 0; i < 5; i++)
{
	SomeFunction(i);
}*/

/*int i = 0;

while (i < 10)
{
	cout << "Printed From Loop: " << i << endl;

	i++;
}*/

// Arrays

//int a[10] = { 2, 3, 66, 78, 56, 67, 7, 34, 56, 78 };
//
//string names[4] = { "Carl", "Marcio", "Rayane", "Andre" };
//
//for (int i = 0; i < size(a); i++)
//{
//
//	a[i] = rand();
//}
//
//for (int i = 0; i < size(names); i++)
//{
//
//	cout << "Printed of names is: " << names[i] << endl;
//}
//
//for (int i = 0; i < size(a); i++)
//{
//
//	cout << "Printed of integer is: " << a[i] << endl;
//}
//
//int i = 0;
//
//while (i < size(a))
//{
//	cout << "Printed From Loop: " << a[i] << endl;
//
//	i++;
//}

// Pointers

//int a = 5;
//
//int* pointerTo_A = &a;
//
//cout << "The a value is : " << a << endl;
//
//cout << "The memory ADDRESS of the a variable is: " << &a << endl;

// cout << endl;

// update memory address with a new value to a variable
// without lost address memory
//*pointerTo_A = 67;

//cout << "The a value is : " << a << endl;

//cout << "The memory ADDRESS of the a variable is: " << &a << endl;

// update memory address with a new value to a variable
// without lost address memory
//a = 43;
//
//cout << "The a value of pointerTo_A is: " << *pointerTo_A << endl;
//
//cout << "The memory ADDRESS of pointerTo_A is: " << pointerTo_A << endl;

// References

/*
int a = 5;
int b = 23;

int& refTo_A = a;



cout << "The value the of A is:  " << a << endl;
cout << "The value the of refTo_A is:  " << refTo_A << endl;

cout << endl;

cout << "The memory_address of the of A is:  " << &a << endl;
cout << "The memory_address of the of refTo_A is:  " << &refTo_A << endl;

//int* prtTop_A = &a;

cout << "The value of a is:  " << a << endl;
cout << "The value refTo_A a is:  " << refTo_A << endl;

cout << endl;

//prtTop_A = &b;
refTo_A = b;

cout << "The value of a (ORIGINAL REFERENCE VARIABLE) is:  " << a << endl;
cout << "The value refTo_A a is:  " << refTo_A << endl;

*/

// Classes


/*Warrior BraveWarrior = Warrior();

BraveWarrior.Health = 12;
BraveWarrior.Power = 99;

Warrior* warPtr = &BraveWarrior;
Warrior& warRef = BraveWarrior;

// accessing variables and functions from a pointer WITH ->
warPtr->Power = 65;
warPtr->Attack();

// acessing variables and functions from references ->
warRef.Health = 53;

cout << "Health: " << BraveWarrior.Health << endl;
cout << "Power: " << BraveWarrior.Power << endl;

BraveWarrior.AttackWithAxe();


Player Wizard = Player(100, 60);

Player Knight = Player(50, 60);

Wizard.Attack();
Wizard.Walk();

cout << endl;

cout << "The health of Wizard value is: " << Wizard.Health << endl;
cout << "The power of Wizard value is: " << Wizard.Power << endl;

cout << endl;

cout << "The health of Knight value is: " << Knight.Health << endl;
cout << "The power of Knight value is: " << Knight.Power << endl;*/

/*cout << "The power value is: " << Wizard.Power << endl;
cout << "The mana value is: " << Wizard.GetMana() << endl;
cout << "The health value is: " << Wizard.Health << endl;

Wizard.SetMana(11);

cout << endl;

cout << "Change mana value" << endl;
cout << "The mana value is: " << Wizard.GetMana() << endl;*/

int main()
{
	// generate rand number and divide by 1000
	int NumberToGuess = rand() % 1000;

	// set the UserGuess to use on game
	string UserGuess;

	// get guess count tries
	int GuessCount = 0;

	// set a variable to continue/stop playing game state
	bool ContinuePlaying = true;

	// continue the game if continuePlaying is true
	while (ContinuePlaying)
	{
		// show start message to player
		cout << "Guess a number between 0 and 999" << endl;

		// answer to player what the guess number has generated
		cin >> UserGuess;

		// convert userGuest to int
		int UserNumber = stoi(UserGuess);

		// compare userNumber to numberToGuess generated
		if (UserNumber == NumberToGuess)
		{

			// if correct congratulations the player and answer play again
			cout << "You guessed correcty. Congratulations you won the game." << endl;
			cout << "It took you " << GuessCount << " guesses to guess number" << endl;
			cout << "Do you want to play again (y/n)?" << endl;

			// set player again state y/n
			string playAgain;

			// answer to player what option you choose
			cin >> playAgain;

			// if y continue a new numberToGuesse generated
			if (playAgain == "y") {

				NumberToGuess = rand() % 1000;
				GuessCount = 0;
			}
			// if n show end game message and stop the game
			else if (playAgain == "n") {

				cout << "Thank you for playing" << endl;
				ContinuePlaying = false;
			}
		}
		// if userNumber less than numberToGuess
		else if (UserNumber > NumberToGuess) {

			cout << "My number is lower, please try again" << endl;
			GuessCount++;
		}
		// if userNumber greater then numberToGuess
		else if (UserNumber < NumberToGuess) {

			cout << "My number is higher, please try again" << endl;
			GuessCount++;
		}
	}



}

