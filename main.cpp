#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"


int main()
{
	std::cout << "Caesar Cipher: " << encryptCaesar("Way to Go!", 5) << std::endl;
	std::cout << "Vigenere Cipher: " << encryptVigenere("Hello, World!", "cake") << std::endl;
	std::cout << "Caesar Decryption: " << decryptCaesar("Rovvy, Gybvn!", 10) << std::endl;
	std::cout << "Vigenere Decryption: " << decryptVigenere("Jevpq, Wyvnd!", "cake") << std::endl;
	return 0;
}
