#include <iostream>
#include <fstream>
#include <string>

// std::string replace(std::string text, std::string s1, std::string s2)
// {
// 	size_t pos = 0;

// 	size_t last = text.rfind(s1);
// 	std::cout << "last is :" << last << std::endl;
// 	while (1 && pos <= text.length())
// 	{
// 		pos = text.find(s1, pos);
// 		std::cout << "\033[0;31mpos is :" << pos << std::endl;
// 		text.erase(pos, pos + s1.length());
// 		text.insert(pos , s2);
// 		text.insert(pos + s2.length(), " ");
// 		std::cout << text << '\n' << std::endl;
// 		if (pos == text.rfind(s1))
// 			break ;
// 	}
// 	return text;
// }

void	replace(std::string text, std::string s1, std::string s2, std::ofstream *output)
{
	int pos;

	for (int i = 0; i < (int)text.size(); i++)
	{
		pos = text.find(s1, i);
		if (pos == i)
		{
			(*output) << s2;
			i += s1.size() - 1;
		}
		else
			(*output) << text[i];
	}
}

int main(int ac, char **av)
{
	std::ifstream input;
	std::ofstream output;
	std::string	  text;
	std::string	  res;

	if (ac != 4 || !av[2][0] || !av[3][0] )
	{
        std::cout << "Error ! Use ./replace file s1 s2." << std::endl;
		return 0;
	}
	input.open(av[1]);
	 if (!input.is_open())
	 {
		std::cout << "Error reading file!" << std::endl;
        return 0;
	 }
	output.open(std::string(av[1]) + ".replace");
	std::getline(input, text, '\0');
	// *replace function*
	replace(text, av[2], av[3], &output);
	input.close();
	output.close();
}