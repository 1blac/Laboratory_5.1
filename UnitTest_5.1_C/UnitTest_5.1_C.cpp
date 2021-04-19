#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratory_5.1_C/Rational.h"
#include "../Laboratory_5.1_C/Rational.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51C
{
	TEST_CLASS(UnitTest51C)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rational a(1, 2);
			double C = a.value();
			Assert::AreEqual(C, 0,5);
		}
	};
}
