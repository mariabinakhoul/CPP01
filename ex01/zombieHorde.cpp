#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombie[i].setname(name);
	}
	return (zombie);
}