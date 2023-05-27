#include "pch.h"
#include "CppUnitTest.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MyTests
{
    TEST_CLASS(StackObjectTests)
    {
    public:
        TEST_METHOD(StackObjectCreation)
        {
            char stackArr[100000];

            Assert::AreEqual(sizeof(stackArr), sizeof(char) * 100000);
        }
    };
}