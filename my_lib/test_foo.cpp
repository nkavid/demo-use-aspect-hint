#include "foo.hpp"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("my_lib::foo")
{
  REQUIRE(my_lib::foo(5) == 50);
}
