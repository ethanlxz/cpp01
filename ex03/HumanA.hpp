#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
	private:
		std::string name;
		Weapon		&weapon;
	public:
		HumanA(std::string str_name, Weapon &ref_weapon);
		~HumanA();
		void setWeapon(Weapon ref_weapon);
		void attack();
};

#endif