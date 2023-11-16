#include "HumanB.hpp"

HumanB::HumanB(std::string str_name) : name(str_name) , weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{ 
	if (!weapon->getType().empty())
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << "has no weapon !" << std::endl;
}

void HumanB::setWeapon(Weapon &ref_weapon)
{
	this->weapon = &ref_weapon;
}
