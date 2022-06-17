#include <iostream>
#include <string>
#include <vector>
#include "dishesList.h"
#include "ordersMid.h"

void OrderColector::newOeder() {
	DishesList listOfDishes;
	vector <Dish> restaurantMenu = listOfDishes.getDishes();

	int temp;
	bool stop = true;

	OrderElements oneOrder;
	int teableNumber;
	int CN = 1;
	teableNumber = 1;

	oneOrder.teableNumber = teableNumber;
	oneOrder.orderCheak = true;
	oneOrder.orderNouber = anyNumber;

	while (stop)
	{
		temp = 1;
		OrderElement onePos;
		onePos.dishName = restaurantMenu[temp].name;
		onePos.lp = CN;
		CN++;
		onePos.price = restaurantMenu[temp].price;

		oneOrder.order.push_back(onePos);
		stop = false;
	}
	orderColection.push_back(oneOrder);
	anyNumber++;
}

void OrderColector::ordersView() {

}

void OrderColector::editionOrder() {
	int temp, tempB;
	temp = 0;
	tempB = 0;
	orderColection[temp].order.erase(orderColection[temp].order.begin() + tempB);
}
