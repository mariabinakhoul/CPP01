#include "HumanB.h"

HumanB::HumanB(std::string name): name(name), weapon(NULL){}

HumanB::~HumanB(){}

void HumanB::set_Weapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack()
{
	if (!weapon)
	{
		std::cout << name << "has no weapon\n";
		return ;
	}
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}