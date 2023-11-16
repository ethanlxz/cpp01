#include "Zombie.hpp"

int main()
{
	Zombie *human = newZombie("Ethan");
	human->announce();
	randomChump("Dickson");
	delete human;
}