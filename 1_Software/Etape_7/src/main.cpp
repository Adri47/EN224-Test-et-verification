#include "pgcd.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("Test PGCD sans cas particulier", "[pgcd]")
{
	SECTION("A>B")
	{
		REQUIRE( pgcd(10, 20) == 10);
		REQUIRE( pgcd(12222, 8739) == 9);
	}
	SECTION("A<B")
	{
		REQUIRE( pgcd(297, 60226) == 1);
		REQUIRE( pgcd(51642, 56905) == 19);

	}
	SECTION("A=B")
	{
		REQUIRE( pgcd(22, 22) == 22);
		REQUIRE( pgcd(777, 777) == 777);

	}
}

TEST_CASE("Test PGCD avec cas particulier", "[pgcd]")
{
	SECTION("A=0")
	{
		REQUIRE( pgcd(0, 33333) == 33333);
		REQUIRE( pgcd(0, 467) == 467);

	}
	SECTION("B=0")
	{
		REQUIRE( pgcd(22, 0) == 22);
		REQUIRE( pgcd(4938, 0) == 4938);

	}

	SECTION("A=B=0")
	{
		REQUIRE( pgcd(0, 0) == 0);
	}
}
