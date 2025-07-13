#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.h"

class HumanB
{
	private:
	std::string name;
	Weapon *weapon;

	public:
	HumanB(std::string);
	~HumanB();
	void set_Weapon(Weapon &);
	void attack();
};

#endif