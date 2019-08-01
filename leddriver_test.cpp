#define CATCH_CONFIG_MAIN
#include "Catch2/include/catch.hpp"
#include "leddriver.h"


TEST_CASE ( "Return Value are checked", "[return value]" ) {

REQUIRE( turnLED_ON(1) == 1 );
REQUIRE ( turnLED_ON(2) == 1);
}


