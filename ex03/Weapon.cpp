#include "Weapon.h"

Weapon::Weapon(std::string type):type(type){}

Weapon::~Weapon(){}

std::string Weapon::getType() const
{
	return (type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}