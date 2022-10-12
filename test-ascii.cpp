#include <iostream>
#include <string>

int main()
{
	std::string s;
	std::cout << "Input: ";
	std::getline(std::cin, s);
	for (int i=0; i<s.length(); i++)
	{
		std::cout << s[i] << " " << (int)s[i] << std::endl;
	}
}
