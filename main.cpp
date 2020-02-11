#define CATCH_CONFIG_MAIN
#include <iostream>
#include "functions_to_implement.cpp"
#include "catch.hpp"

int main(){
    TEST_CASE( "RemoveAllStrings", "[RemoveStrings]" ) {
        REQUIRE( RemoveAllSubstrings("abcwowdefghiwow","wow") == "abcdefhji" );
        REQUIRE( RemoveAllSubstrings("abcwowdefghiwow","abc") == "wowdefhjiwow" );
        REQUIRE( RemoveAllSubstrings("hithere","hi") == "there" );
}