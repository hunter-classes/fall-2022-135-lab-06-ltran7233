#include <iostream>
#include <cctype>
#include <string>
#include "caesar.h"

char shiftChar(char c, int rshift)
{
	int sum;
	if (isalpha(c))
	{
		sum = (int)c + rshift;
		if (isupper(c)) // upper case letter (65-90)
		{
			return char(65 + ((sum % 65) % 26));
		}
		else // lower case letter (97-122)
		{
			return char(97 + ((sum % 97) % 26));
		}
	}
	else
	{
		return c;
	}
}

std::string encryptCaesar(std::string plaintext, int rshift)
{
	std::string str = "";
	for (int i=0; i<plaintext.length(); i++)
	{
		str += shiftChar(plaintext[i], rshift);
	}
	return str;
}
