#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include <cstdlib>
#include "dishesList.h"
#include "ordersMid.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	OrderColector ordersDoingthing;
	char navigator = '0';
	while (navigator != '4') {
		cout << "=============menu============" << endl
			<< "1.Stwórz nowe zamówienie" << endl
			<< "2.Otwórz istniejące zamóienie" << endl
			<< "3.Zamknij rachunek" << endl
			<< "4.Wyjście" << endl;

		cin >> navigator;

		switch (navigator)
		{
		case '1':
			system("cls");
			ordersDoingthing.addOrder();
			break;
		case '2':
			system("cls");
			ordersDoingthing.ordersView();
			break;
		case '3':
			break;
		case '4':
			system("cls");
			cout << "koniec aplikacji" << endl;
			Sleep(2000);
			break;
		default:
			system("cls");
			cout << "zła opcja " << endl;
			Sleep(3000);
			break;
		}
		system("cls");
	}
}
