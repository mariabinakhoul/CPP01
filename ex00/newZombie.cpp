#include "Zombie.h"

Zombie* newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name);
	zombie->the_phrase();
	return (0);
}