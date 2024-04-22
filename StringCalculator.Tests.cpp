#include "StringCalculator.h"
#include <gtest/gtest.h>

TEST(StringCalculatorTestSuite,GivenEmptyStringZeroIsExpected){
    //Arrange
    StringCalculator objUnderTest;
    string input1="";
    int expectedValue=0;
    //Act
   int actualValue=  objUnderTest.Add(input1);
    //Assert
    ASSERT_EQ(actualValue,expectedValue);
}
