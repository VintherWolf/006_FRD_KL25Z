#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "helloworld.h"


TEST_CASE ( "displayStringOnStdOut(char *str) is tested", "[5x hello world]" ) {

std::strcpy(str, "Hello World");
displayStringOnStdOut(str);
REQUIRE( std::strcmp( str, "Hello World!" ) == 0 );
}


