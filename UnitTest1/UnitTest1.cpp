#include "pch.h"
#include "CppUnitTest.h"
#include"..\main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
		
	public:
		TEST_METHOD(TestMethod1)
		{
			int* p;
			Assert::AreEqual(FillArrayWithT(p,2), int('0'));
		}
		TEST_METHOD(TestMethod2)
		{
			
			Assert::AreEqual(0, 0);
		}
	};
}
