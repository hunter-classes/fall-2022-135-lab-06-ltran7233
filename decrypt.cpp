#include <iostream>
#include <cctype>
#include <string>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

char decryptChar(char c, int rshift)
{
	int sub;
	if (isalpha(c))
	{
		sub = (int)c - rshift;
		if (isupper(c)) // upper case letter (65-90)
		{
			return char(90 - ((90 % sub) % 26));
		}
		else // lower case letter (97-122)
		{
			return char(122 - ((122 % sub) % 26));
		}
	}
	else
	{
		return c;
	}
}

std::string decryptCaesar(std::string ciphertext, int rshift)
{
	std::string str = "";
	for (int i=0; i<ciphertext.length(); i++)
	{
		str += decryptChar(ciphertext[i], rshift);
	}
	return str;
}

std::string decryptVigenere(std::string ciphertext, std::string keyword)
{
	std::string str = "";
	int count = 0;
	for (int i=0; i<ciphertext.length(); i++)
	{
		if (isalpha(ciphertext[i]))
		{
			if (isupper(keyword[count]))
			{
				str += decryptChar(ciphertext[i], (keyword[count]+32)%65);
				count++;
			}
			else
			{
				str += decryptChar(ciphertext[i], keyword[count]%97);
				count++;
			}
		}
		else
		{
			str += decryptChar(ciphertext[i], keyword[count]);
		}
		if (count >= keyword.length())
		{
			count = 0;
		}
	}
	return str;
}

