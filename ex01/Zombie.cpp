#include "Zombie.h"

Zombie::Zombie()
{
	static int n = 1;
	std::cout << "Zombie "<< n++ << "joined the horde\n";
}

Zombie::~Zombie()
{
	std::cout << name << " left\n";
}
void Zombie::setname(std::string name)
{
	this->name = name;
}


void Zombie::the_phrase() const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
