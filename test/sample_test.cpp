#include <gtest/gtest.h>
extern "C"{
    #include <stdint.h>
    #include "sample.h"
}

class TestCase1 : public ::testing::Test {
};

TEST_F(TestCase1, Test1_1) {
    EXPECT_EQ(3,  sample_func(1, 2));
}

TEST_F(TestCase1, Test1_2) {
    EXPECT_EQ(-2, sample_func(1, -3));
}

class TestCase2 : public ::testing::Test {
};

TEST_F(TestCase2, Test2_1) {
    EXPECT_EQ(5,  sample_func(1, 2));
}

TEST_F(TestCase2, Test2_2) {
    EXPECT_EQ(-5, sample_func(1, -3));
}
