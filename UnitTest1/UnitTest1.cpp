#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05.1/Lab_05.1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double r = 3;
			double s = 2;
			double T = (g(r, s * s + 1) * g(r, s * s + 1) + g(1, r * r + s)) / (1 + g(1, r * s) * g(1, r * s));
			double expT = 0.085;
			Assert::AreEqual(T, expT, 0.001);
		}
	};
}
