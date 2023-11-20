#include <gtest/gtest.h>
#include "StringCalculator.h"
//value based testing
TEST(StringCalculatorTests,GivenEmptyStringZeroIsExpected){
     //Arrange
    StringCalculator objUnderTest;
    string input="";
    int expectedValue=0;
     //Act
     int actualValue=objUnderTest.Add(input);
     //Assert
     ASSERT_EQ(expectedValue,actualValue);
}