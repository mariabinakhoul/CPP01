#include "Zombie.h"

int main()
{
	int n = 2;
	if (n <= 0)
	{	
		std::cout << "Invalid number of zombies\n";
		return (1);
	}
	Zombie *zombie = zombieHorde(n, "mareille");
	for (int i = 0; i < n; i++)
		zombie[i].the_phrase();
	delete []zombie;
	return (0);
}