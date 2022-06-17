#ifndef ORDERSMID_H
#define ORDERSMID_H

#include "dishesList.h"
#include <vector>

using namespace std;

class OrderElement
{
public:

	int lp;
	double price;
	string dishName;

	OrderElement(int lp1, double price1, string dishName1) {
		lp = lp1;
		price = price1;
		dishName = dishName1;
	}
	OrderElement() {};
};

class OrderElements
{
public:
	vector <OrderElement> order;
	int teableNumber;
	int orderNouber;
	bool orderCheak;
	OrderElements(int teableNumber1, int orderNumber1, bool orderCheak1) {
		orderNouber = orderNumber1;
		teableNumber = teableNumber1;
		orderCheak = orderCheak1;
	}
	OrderElements() {};
};

class OrderColector {
public:
	int anyNumber = 1;
	int ordersSum = 0;
	vector <OrderElements> orderColection;
	void newOeder();
	void ordersView();
	void editionOrder();
};
#endif