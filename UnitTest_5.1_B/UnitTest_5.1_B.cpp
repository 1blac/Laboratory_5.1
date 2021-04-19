#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratory_5.1_B/Rational.h"
#include "../Laboratory_5.1_B/Rational.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51B
{
	TEST_CLASS(UnitTest51B)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rational a(69, 2);
			double C = a.value();
			Assert::AreEqual(C, 34,5);
		}
	};
}
