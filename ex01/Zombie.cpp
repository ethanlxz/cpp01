#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string str)
{
	this->name = str;
}

Zombie::~Zombie()
{
	 std::cout << this->name << " has been killed" << std::endl;
}

void Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::addname(std::string str)
{
	this->name = str;
}