#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		Zombie(std::string str);
		~Zombie();
		void announce(void);
		void addname(std::string str);
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);
Zombie *zombieHorde(int num, std::string name);

#endif