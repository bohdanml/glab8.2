#include "pch.h"
#include "CppUnitTest.h"
#include"..\\glab8.2\lab.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace YourUnitTestNamespace
{
    TEST_CLASS(YourTestClass)
    {
    public:

        TEST_METHOD(TestTransformString)
        {
            // Arrange
            string inputStr = "hello world";
            string expectedOutputStr = "HELLO world";

            // Act
            string outputStr = transformString(inputStr);

            // Assert
            Assert::AreEqual(expectedOutputStr, outputStr);
        }
    };
}
