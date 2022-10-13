#include <iostream>
#include <cctype>
#include <string>
#include "caesar.h"
#include "vigenere.h"

std::string encryptVigenere(std::string plaintext, std::string keyword)
{
	std::string str = "";
	int count = 0;
	for (int i=0; i<plaintext.length(); i++)
	{
		if (isupper(keyword[count]))
		{
			str += shiftChar(plaintext[i], keyword[count]+32);
		}
		else
		{
			str += shiftChar(plaintext[i], keyword[count]);
		}
		std::cout << keyword[count];
		if (isalpha(plaintext[i]))
		{
			if (count < keyword.length())
			{
				count++;
			}
			else
			{
				count = 0;
			}
		}
	}
	return str;
}
