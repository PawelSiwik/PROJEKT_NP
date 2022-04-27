#include "pch.h"
#include "CppUnitTest.h"
#include "../receipt_at_the_restaurant_code/ordersMid.h"
#include "../receipt_at_the_restaurant_code/dishesList.h"
#include "../receipt_at_the_restaurant_code/dishesList.cpp"
#include "../receipt_at_the_restaurant_code/ordersMid.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace receiptattherestaurantunittests
{
	TEST_CLASS(receiptattherestaurantunittests)
	{
	public:
		
		TEST_METHOD(AddOrderPassedOk)
		{
			OrderColector orderColector;
			Orders orders(1, 1, true);
			orderColector.addOrder(orders);

			Assert::AreEqual(size_t(1), orderColector.orderColection.size());
		}

		TEST_METHOD(AddOrderAndRemoveItFromCollection)
		{
			OrderColector orderColector;
			Orders orders(1, 1, true);
			orderColector.addOrder(orders);
			orderColector.orderColection.clear();
			Assert::AreEqual(size_t(0), orderColector.orderColection.size());
		}

		TEST_METHOD(NotAddOrdedPassedOk)
		{
			OrderColector orderColector;
			Orders orders(1, 1, true);

			Assert::AreEqual(size_t(0), orderColector.orderColection.size());
		}
	};
}
