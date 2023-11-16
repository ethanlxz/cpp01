#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac != 4 || !av[2][0] || !av[3][0] )
	{
        std::cout << "Error ! Use ./replace file s1 s2." << std::endl;
		return 0;
	}

}