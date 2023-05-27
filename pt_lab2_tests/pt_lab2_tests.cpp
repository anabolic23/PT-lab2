#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MyTests
{
    TEST_CLASS(ptlab2tests)
    {
    public:
        TEST_METHOD(MemoryAllocationTest)
        {
            try {

                while (true) {
                    int* ptr = new int[1000000000];
                }
            }
            catch (std::bad_alloc&) {
                Assert::IsTrue(true);
            }

        }
    };
}