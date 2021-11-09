#pragma once
class Player
{
	public:
		Player();
		Player(int _power, float _health);
		~Player();

		int Power;
		float Health;

		void Attack();
		void Walk();

		int GetMana();
		void SetMana(int _mana);

	private:
		int Mana;
};

