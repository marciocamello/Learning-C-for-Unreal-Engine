#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

Player::Player()
{
	Health = 100;
	Mana = 50;
	Power = 80;
}

Player::Player(int _power, float _health)
{
	this->Power = _power;
	this->Health = _health;
}

Player::~Player()
{
}

void Player::Attack()
{

	cout << "The player is attacking" << endl;
}

void Player::Walk()
{

	cout << "The player is walking" << endl;
}

int Player::GetMana()
{
	return this->Mana;
}

void Player::SetMana(int _mana)
{
	this->Mana = _mana;
}
