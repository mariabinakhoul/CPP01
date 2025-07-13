#include "Zombie.h"

Zombie::Zombie(std::string name):name(name){}

Zombie::~Zombie()
{
	std::cout << name << " all destroyed\n";
}

void Zombie::the_phrase() const
{
	std::cout<< name << ": BraiiiiiiinnnzzzZ...\n";
}
