#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestt
{
	TEST_CLASS(UnitTestt)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a = 1;
			A(0., 1., a);
			Assert::AreEqual(0., a, a);
		}
	};
}
