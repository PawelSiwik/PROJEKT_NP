#include <iostream>
#include <string>
#include <vector>
#include "dishesList.h"
#include "ordersMid.h"
using namespace std;

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
		{	
			Orders orders(1, 1, true);
			ordersDoingthing.addOrder(orders);
			break;
		}
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
