#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratory_5_1_E/Rational.h"
#include "../Laboratory_5_1_E/Rational.cpp"
#include "../Laboratory_5_1_E/Rational_public.h"
#include "../Laboratory_5_1_E/Rational_public.cpp"
#include "../Laboratory_5_1_E/Object.h"
#include "../Laboratory_5_1_E/Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51E
{
	TEST_CLASS(UnitTest51E)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rational F;
			F.setA(69);
			double C = F.getA();
			Assert::AreEqual(C, 69.);
		}
	};
}
