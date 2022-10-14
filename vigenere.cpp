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
		if (isalpha(plaintext[i]))
		{
			if (isupper(keyword[count]))
			{
				str += shiftChar(plaintext[i], (keyword[count]+32)%97);
				count++;
			}
			else
			{
				str += shiftChar(plaintext[i], keyword[count]%97);
				count++;
			}
		}
		else
		{
			str += shiftChar(plaintext[i], keyword[count]);
		}
		if (count >= keyword.length())
		{
			count = 0;
		}
	}
	return str;
}
