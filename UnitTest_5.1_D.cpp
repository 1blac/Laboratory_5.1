#include "pch.h"
#include "CppUnitTest.h"
#include "D:\ООП\Лабораторні 5\Laboratoty_5.1_D\Pair.h"
#include "D:\ООП\Лабораторні 5\Laboratoty_5.1_D\Pair.cpp"
#include "D:\ООП\Лабораторні 5\Laboratoty_5.1_D\Rational.h"
#include "D:\ООП\Лабораторні 5\Laboratoty_5.1_D\Rational.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51D
{
	TEST_CLASS(UnitTest51D)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair a;
			a.SetL(4);
			Assert::AreEqual(a.GetL(), 4.);
		}
	};
}
