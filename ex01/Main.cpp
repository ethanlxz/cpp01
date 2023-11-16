#include "Zombie.hpp"

int main()
{
	Zombie* zombies = zombieHorde(4, "Ethan");
	for (int i = 0; i < 4; i++)
	{
		zombies[i].announce();
		std::cout << "Zombie is created\n";
	}
	delete[] zombies;
}