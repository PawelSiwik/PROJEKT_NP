#include <iostream>
#include <string>
#include <vector>
#include "dishesList.h"
#include "ordersMid.h"

void Orders::newOeder() {
		vector <Dish> dishes = listOfDishes.getDishes();
		unsigned int navigator2 = 100;
		int lp = 1;
		while (navigator2 != 99)
		{
			cout << "podaj numer dania lup wpisz 100 je�li chcesz zako�czy�" << endl;
			cin >> navigator2;
			navigator2--;
			if (navigator2 > 19 && navigator2 != 99) {
				cout << "b��dna liczba" << endl;
			}
			else if (navigator2 == 99) {
				cout << "koniec" << endl;
			}
			else {
				order.push_back(Order(lp, dishes[navigator2].number, dishes[navigator2].price, dishes[navigator2].name));
				lp++;
			}
		}
	}

void OrderColector::addOrder() {
	int teableNumber1, orderNumber1;
	orderNumber1 = anyNumber;
	anyNumber++;
	cout << "podaj nr stolika ";
	cin >> teableNumber1;
	orderColection.push_back(Orders(teableNumber1, orderNumber1, 1));
	orderColection[ordersSum].newOeder();
	ordersSum++;
}

void OrderColector::ordersView() {
	cout << endl << "Aktywne zam�wienia: " << endl;
	for (Orders item1 : orderColection) {
		if (item1.orderCheak) {
			cout << "Numer zam�wienia: " << item1.orderNouber << ", na st� nr.: " << item1.teableNumber << endl;
			for (Order item2 : item1.order) {
				cout << item2.lp << " " << item2.dishNumber << " " << item2.dishName << " " << item2.price << " z�" << endl;
			}

			cout << endl;
		}
	}
	char navigator3 = 'n';
	cout << "Chcesz edytowa� kt�re� zam�wienie? [t/n]  -";
	cin >> navigator3;

	if (navigator3 == 't' || navigator3 == 'T') {
		editionOrder();
	}
}

void OrderColector::editionOrder() {
	int orderNmberItem;
	Orders ordersObject;
	cout << "podaj numer zam�wienia do edycji ";
	cin >> orderNmberItem;
	for (Orders item1 : orderColection) {
		if (item1.orderNouber == orderNmberItem) {
			ordersObject = item1;
		}
	}
	 
	cout << "Numer zam�wienia: " << ordersObject.orderNouber << ", na st� nr.: " << ordersObject.teableNumber << endl;
		for (Order item2 : ordersObject.order) {
			cout << item2.dishNumber << " " << item2.dishName << " " << item2.price << " z�" << endl;
		}
}
