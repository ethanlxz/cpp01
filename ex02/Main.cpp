#include <iostream>

int main()
{
	std::string  str = "HI THIS IS BRAIN";

	std::string *strPTR = &str;

	std::string &strREF = str;

	std::cout << "\033[1;33mAddress for :" << std::endl;
	std::cout << "String : " << &str << std::endl;
	std::cout << "StringPTR : " << strPTR << std::endl;
	std::cout << "StringREF : " << &strREF << std::endl;
	std::cout << std::endl;
	std::cout << "Value for :" << std::endl;
	std::cout << "String : " << str << std::endl;
	std::cout << "*stringPTR : " << *strPTR << std::endl;
	std::cout << "stringREF : " << strREF << std::endl;
	std::cout << "\033[1;0m";
}