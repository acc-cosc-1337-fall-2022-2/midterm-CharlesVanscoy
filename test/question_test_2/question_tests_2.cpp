#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify get_fahrenheit") {
	REQUIRE(get_fahrenheit(37) == ((1.8 * 37) + 32)); //((1.8 * 37) + 32) = 98.6 and passed test there for input 37 gives output 98.6
	REQUIRE(get_fahrenheit(25) == 77);
	REQUIRE(get_fahrenheit(0) == 32);
	REQUIRE(get_fahrenheit(37) == 98.6); //test case fails due to double comparison
}