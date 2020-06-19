#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "helloworld.h"

TEST_CASE("displayStringOnStdOut(char *str) is tested", "[5x hello world]")
{
    char str[20];
    std::strncpy(str, "Hello World", 20);
    displayStringOnStdOut(str);
    REQUIRE(std::strcmp(str, "Hello World!") == 0);
}
