#include "Calculator.h"
#include <gtest/gtest.h>
#include <stdexcept>


TEST(CalculatorTest, AddPositiveNumbers) {
    Calculator calc;
    EXPECT_EQ(calc.Add(2, 3), 5);
}

TEST(CalculatorTest, AddNegativeNumbers) {
    Calculator calc;
    EXPECT_EQ(calc.Add(-2, -3), -5);
}

TEST(CalculatorTest, SubtractPositiveNumbers) {
    Calculator calc;
    EXPECT_EQ(calc.Subtract(5, 3), 2);
}

TEST(CalculatorTest, MultiplyPositiveNumbers) {
    Calculator calc;
    EXPECT_EQ(calc.Multiply(2, 3), 6);
}

TEST(CalculatorTest, IsEvenWithEvenNumber) {
    Calculator calc;
    EXPECT_TRUE(calc.IsEven(4));
}

TEST(CalculatorTest, IsEvenWithOddNumber) {
    Calculator calc;
    EXPECT_FALSE(calc.IsEven(5));
}


TEST(CalculatorTest, DivideByZeroThrowsException) {
    Calculator calc;
    ASSERT_THROW(calc.Divide(10, 0), std::invalid_argument);
}


class CalculatorFixtureTest : public ::testing::Test {
protected:
    void SetUp() override {
        
    }
    Calculator calc;
};

TEST_F(CalculatorFixtureTest, AddWithFixture) {
    EXPECT_EQ(calc.Add(2, 3), 5);
}

TEST_F(CalculatorFixtureTest, SubtractWithFixture) {
    EXPECT_EQ(calc.Subtract(5, 3), 2);
}