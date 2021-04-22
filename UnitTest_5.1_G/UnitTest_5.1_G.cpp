#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratory_5.1_G/Man.h"
#include "../Laboratory_5.1_G/Man.cpp"
#include "../Laboratory_5.1_G/Student.cpp"
#include "../Laboratory_5.1_G/Student.h"
#include "D:\ООП\Лабораторні 5\Laboratory_5.1_G\Object.h"
#include "D:\ООП\Лабораторні 5\Laboratory_5.1_G\Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51G
{
	TEST_CLASS(UnitTest51G)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Man x;
			x.setWeight(69);
			int y = x.getWeight();
			Assert::AreEqual(y, 69);
		}
	};
}
