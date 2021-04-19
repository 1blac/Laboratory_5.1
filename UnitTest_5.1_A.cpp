#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratory_5.1/Line.h"
#include "../Laboratory_5.1/Line.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51A
{
	TEST_CLASS(UnitTest51A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LINE TEST(10, 5, 1);
			double test = TEST.function();
			Assert::AreEqual(15., test);
		}
	};
}
