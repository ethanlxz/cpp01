#include "Harl.hpp"

int main(int ac , char **av)
{
	Harl harl;

	if (ac == 2)
		harl.complain(av[1]);
	else
	{
		std::cout << "test cases for levels :\n";
		harl.complain("DEBUG");
		harl.complain("INFO");
		harl.complain("WARNING");
		harl.complain("ERROR");
		harl.complain("DEFAULT");
	}
}