#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
	private:
	std::string name;

	public:
	Zombie();
	~Zombie();
	void setname(std::string);
	void the_phrase() const;
};

Zombie* zombieHorde( int N, std::string name );

#endif