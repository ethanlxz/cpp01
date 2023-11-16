#include "Zombie.hpp"

Zombie *zombieHorde(int num, std::string name)
{
	Zombie *arr;

	if (num > 0)
	{
		arr = new Zombie[num];
		for (int i = 0; i < num; i++)
				arr[i].addname(name);
		return arr;
	}
	return 0;
}