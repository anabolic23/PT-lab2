#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

struct Point
{
    int x;
    int y;
};

namespace MyTests
{
    TEST_CLASS(ValueTypeTests)
    {
    public:
        TEST_METHOD(PassByValueTest) {
            Point p1;
            p1.x = 10;
            p1.y = 20;

            Point p2 = PassByValue(p1);

            Assert::AreEqual(p1.x, p2.x);
            Assert::AreEqual(p1.y, p2.y);

            p1.x = 30;
            p1.y = 40;

            Assert::AreNotEqual(p1.x, p2.x);
            Assert::AreNotEqual(p1.y, p2.y);
        }
    private:
        Point PassByValue(Point p)
        {
            return p;
        }
    };
}