#include "pch.h"
#include "CppUnitTest.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MyTests
{
    TEST_CLASS(HeapObjectTests)
    {
    public:
        TEST_METHOD(HeapObjectCreation) {
            char* heapArr = new char[100000];

            Assert::AreEqual(sizeof(*heapArr), sizeof(char));
            
            delete[] heapArr;
        }
    };
}