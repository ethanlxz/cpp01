#include "HumanA.hpp"
#include <cstring>

HumanA::HumanA(std::string str_name, Weapon &ref_weapon) : name(str_name), weapon(ref_weapon)
{
	this->name = str_name;
	this->weapon = ref_weapon;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{ 
	if (!weapon.getType().empty())
		std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
	else
		std::cout << this->name << "has no weapon !" << std::endl;
}

void HumanA::setWeapon(Weapon ref_weapon)
{
	this->weapon = ref_weapon;
}