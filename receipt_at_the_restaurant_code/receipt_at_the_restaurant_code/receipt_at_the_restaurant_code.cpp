#include <iostream>
#include <string>
#include <vector>
#include "dishesList.h"
using namespace std;


class Order
{
public:

	int dishNumber;
	double price;
	string dishName;

	Order(int dishNumber1, double price1, string dishName1) {
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
	void newOeder() {
		vector <Dish> dishes = listOfDishes.getDishes();
		unsigned int navigator2 = 100;
		while (navigator2 != 99)
		{
			cout << "podaj numer dania lup wpisz 100 jeśli chcesz zakończyć" << endl;
			cin >> navigator2;
			navigator2--;
			if (navigator2 > 19 && navigator2 != 99) {
				cout << "błędna liczba" << endl;
			}
			else if (navigator2 == 99) {
				cout << "koniec";
			}
			else {
				order.push_back(Order(dishes[navigator2].number, dishes[navigator2].price, dishes[navigator2].name));
			}
		}
	}
	Orders(int teableNumber1, int orderNumber1) {
		orderNouber = orderNumber1;
		teableNumber = teableNumber1;
	}
};

class OrderColector {
public:
	int anyNumber = 1;
	int ordersSum = 0;
	vector <Orders> orderColection;
	void addOrder() {
		int teableNumber1, orderNumber1;
		orderNumber1 = anyNumber;
		anyNumber++;
		cout << "podaj nr stolika ";
		cin >> teableNumber1;
		orderColection.push_back(Orders(teableNumber1, orderNumber1));
		orderColection[ordersSum].newOeder();
		ordersSum++;
	}
	void ordersView() {
		for (Orders item1 : orderColection) {
			cout << "Numer zamówienia: " << item1.orderNouber << ", na stół nr.: " << item1.teableNumber << endl;
			for (Order item2 : item1.order) {
				cout << item2.dishNumber << " " << item2.dishName << " " << item2.price << " zł" << endl;
			}
		}
	}




};



int main()
{
	setlocale(LC_ALL, "");
	OrderColector ordersDoingthing;
	int navigator = 5;
	while (navigator != 4) {
		cout << "=============menu============" << endl
			<< "1.Stwórz nowe zamówienie" << endl
			<< "2.Otwórz istniejące zamóienie" << endl
			<< "3.Zamknij rachunek" << endl
			<< "4.Wyjście" << endl;

		cin >> navigator;

		switch (navigator)
		{
		case 1:
			ordersDoingthing.addOrder();
			break;
		case 2:
			ordersDoingthing.ordersView();
			break;
		case 3:
			break;
		case 4:
			cout << "koniec aplikacji" << endl;
			break;
		default:
			cout << "zła opcja " << endl;
			break;
		}

	}
}
