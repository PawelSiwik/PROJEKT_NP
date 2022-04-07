#ifndef ORDERSMID_H
#define ORDERSMID_H

using namespace std;

class Order
{
public:

	int lp;
	int dishNumber;
	double price;
	string dishName;

	Order(int lp1, int dishNumber1, double price1, string dishName1) {
		lp = lp1;
		dishNumber = dishNumber1;
		price = price1;
		dishName = dishName1;
	}

};

class Orders
{
public:
	DishesList listOfDishes;
	vector <Order> order;
	int teableNumber;
	int orderNouber;
	bool orderCheak;
	void newOeder();
	Orders(int teableNumber1, int orderNumber1, bool orderCheak1) {
		orderNouber = orderNumber1;
		teableNumber = teableNumber1;
		orderCheak = orderCheak1;
	}
	Orders() {};
};

class OrderColector {
public:
	int anyNumber = 1;
	int ordersSum = 0;
	vector <Orders> orderColection;
	void addOrder();
	void ordersView();
	void editionOrder();
};
#endif