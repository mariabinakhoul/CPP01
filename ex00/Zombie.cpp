#include "Zombie.h"

Zombie::Zombie(std::string name):name(name){}

Zombie::~Zombie()
{
	std::cout << "all destroyed";
}

void Zombie::the_phrase() const
{
	std::cout<< ": BraiiiiiiinnnzzzZ...";
}
