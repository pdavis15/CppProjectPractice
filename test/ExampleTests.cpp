#include "../src/Example.hpp"

#include <gtest/gtest.h>

struct ExampleTests : public ::testing::Test {
    int* x;

    virtual void SetUp() override {
        x = new int(42);
    }

    virtual void TearDown() override {
        delete x;
    }

};

// Doesnt need to match name of file, but good practice
// Multiply accumulate test
TEST(ExampleTests, MAC) {
    int x = 42;
    int y = 16;
    int sum = 100;
    int oldsum = sum;
    EXPECT_EQ(
        oldsum + x * y,
        MAC(x,y,sum)
    );
    EXPECT_EQ(
        oldsum + x * y,
        sum
    );
}