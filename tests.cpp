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
	CHECK(encryptCaesar("Large Shift?", 25) == "Kzqfd Rghes?");
}

TEST_CASE("encryptVigenere tests")
{
	CHECK(encryptVigenere("Vigenere Cipher Working!", "program") == "Kzukeedt Twvyed Lffqzns!");
	CHECK(encryptVigenere("Pumpkin Season", "Apple") == "Pjbaoic Hpesdc");
	CHECK(encryptVigenere("Way to Go!", "WORD") == "Sop wk Uf!");
}

TEST_CASE("decryptChar tests")
{
	CHECK(decryptChar('D', 3) == 'A');
	CHECK(decryptChar(' ', 10) == ' ');
	CHECK(decryptChar('t', 14) == 'f');
	CHECK(decryptChar('s', 23) == 'v'); 
	CHECK(decryptChar('p', 18) == 'x');
}

TEST_CASE("decryptCaesar tests")
{
	CHECK(decryptCaesar("Wtaad Ldgas!", 15) == "Hello World!");
	CHECK(decryptCaesar("Kzqfd Rghes?", 25) == "Large Shift?");
	CHECK(decryptCaesar("!@#$%^&*()", 2) == "!@#$%^&*()");
	CHECK(decryptCaesar("1234567890", 3) == "1234567890");
}

TEST_CASE("decryptVigenere tests")
{
	CHECK(decryptVigenere("Kzukeedt Twvyed Lffqzns!", "program") == "Vigenere Cipher Working!");
	CHECK(decryptVigenere("Pjbaoic Hpesdc", "Apple") == "Pumpkin Season");
	CHECK(decryptVigenere("Sop wk Uf!", "WORD") == "Way to Go!");
}

