#include "../Example.hpp"

#include <gtest/gtest.h>

TEST(ExampleTests, MAC){
    int x = 42;
    int y = 16;
    int sum = 100;
    int expected = sum + x * y;
    EXPECT_EQ(
        expected,
        MAC(x, y, sum)
    );
    EXPECT_EQ(
        expected,
        sum
    );
}