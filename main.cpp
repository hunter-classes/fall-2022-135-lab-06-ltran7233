#include <iostream>
#include "caesar.h"
#include "vigenere.h"


int main()
{
	std::cout << encryptCaesar("Way to Go!", 5) << std::endl;
	std::cout << encryptVigenere("Hello, World!", "cake") << std::endl;
	return 0;
}
