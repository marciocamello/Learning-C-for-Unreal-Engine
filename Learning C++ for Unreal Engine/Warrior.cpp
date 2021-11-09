#include <iostream>
#include <string>
#include "Warrior.h"

using namespace std;

Warrior::Warrior()
{
	Health = 100;
	Power = 80;
}

Warrior::~Warrior() {

}

void Warrior::AttackWithAxe()
{

	cout << "The warrior is attacking with axe" << endl;
}
