#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.2 it/Lab 6.2 it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod2)
		{
			const int size = 5;
			int a[size] = { 2, 4, 6, 8, 10 };  

			
			Change(a, size);

			
			Assert::AreEqual(2, a[0]);



		}
	};
}
