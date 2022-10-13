#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

TEST_CASE("shiftChar tests")
{
	CHECK(shiftChar('A', 3) == 'D');
	CHECK(shiftChar(' ', 10) == ' ');
	CHECK(shiftChar('f', 14) == 't');
	CHECK(shiftChar('v', 23) == 's'); 
	CHECK(shiftChar('x', 18) == 'p');
}

TEST_CASE("encryptCaesar tests")
{
	CHECK(encryptCaesar("Hello World!", 15) == "Wtaad Ldgas!");
	CHECK(encryptCaesar("1234567890", 3) == "1234567890");
	CHECK(encryptCaesar("!@#$%^&*()", 2) == "!@#$%^&*()");
	CHECK(encryptCaesar("Large Shift?", 35) == "Ujapn Bqroc?");
}

TEST_CASE("encryptVigenere tests")
{
	CHECK(encryptVigenere("Vigenere Cipher Working!", "program") == "Kzukeedt Twvyed Lffqzns!");
}

TEST_CASE("decryptChar tests")
{
	
}

TEST_CASE("decryptCaesar tests")
{
	
}

TEST_CASE("decryptVigenere tests")
{
	
}

