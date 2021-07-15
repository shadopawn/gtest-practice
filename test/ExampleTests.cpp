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

TEST(ExampleTests, sum){
    int a = 42;
    int b = 16;
    int expectedSum = a + b;
    EXPECT_EQ(
        expectedSum,
        sum(a, b)
    );
}