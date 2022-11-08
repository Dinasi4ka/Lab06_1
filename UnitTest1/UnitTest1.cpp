#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab06_1/Lab06_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			int array[] = { 1,2,3,4,5 };
			t = Sum(array, 22);
			Assert::AreEqual(t, 3);

		}
	};
}
