#include "pch.h"
#include "CppUnitTest.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

class MyClass {
public:
    int value;
};

void modifyValue(MyClass& obj) {
    obj.value = 10;
}

namespace MyTests
{
    TEST_CLASS(ReferenceTypeTests)
    {
    public:

        TEST_METHOD(TestModifyValue)
        {
            MyClass obj;
            obj.value = 5;

            modifyValue(obj);

            Assert::AreEqual(obj.value, 10);
        }
    };
}