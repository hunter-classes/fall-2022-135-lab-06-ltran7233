#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "caesar.h"

TEST_CASE("caesar rightShift tests")
{
	CHECK(encryptCaesar("Hello World!", 15) == "Wtaad Ldgas!");
	
}
