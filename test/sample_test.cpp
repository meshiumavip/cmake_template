#include <gtest/gtest.h>
extern "C" {
#include <stdint.h>
#include "sample.h"
}

#undef sample_func_sub
#define sample_func_sub __sample_func_sub

int32_t __sample_func_sub(const int32_t a, const int32_t b) {
  if (a > b) {
    return 1;
  }
  return 0;
}

extern "C" {
#include "sample.c"
}

class TestCase1 : public ::testing::Test {};

TEST_F(TestCase1, Test1_1) {
  EXPECT_EQ(3, sample_func(1, 2));
}

TEST_F(TestCase1, Test1_2) {
  EXPECT_EQ(-2, sample_func(-3, 1));
}

class TestCase2 : public ::testing::Test {};

TEST_F(TestCase2, Test2_2) {
  EXPECT_EQ(0, sample_func(2, 1));
}

TEST_F(TestCase2, Test2_3) {
  EXPECT_EQ(0, sample_func(1, -3));
}