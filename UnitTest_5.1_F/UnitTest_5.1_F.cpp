#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratory_5.1_F/Student_public.h"
#include "../Laboratory_5.1_F/Student_public.cpp"
#include "D:\ООП\Лабораторні 5\Laboratory_5.1_F\Man.h"
#include "D:\ООП\Лабораторні 5\Laboratory_5.1_F\Man.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51F
{
	TEST_CLASS(UnitTest51F)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			{
				Student_public y;
				Assert::AreEqual(y.setChangeYearOFstudyPlus(4), true);
			}
		}
	};
}
