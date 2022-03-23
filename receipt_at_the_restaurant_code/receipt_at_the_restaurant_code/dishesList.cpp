#include <iostream>
#include <string>
#include "dishesList.hpp"
#define	 LICZBA_DAN 20


using namespace std;

class Dish
{
public:
	int number;
	string name;
	double price;
};


class DishesList
{
public:
	auto getDishes() {
		Dish danie[LICZBA_DAN];
		danie[0].number = 1;
		danie[0].name = "rosó³ z makaronem";
		danie[0].price = 13.00;

		danie[1].number = 2;
		danie[1].name = "pomidorowa z ry¿em";
		danie[1].price = 15.00;

		danie[2].number = 3;
		danie[2].name = "barszcz z uszkami";
		danie[2].price = 15.00;

		danie[3].number = 4;
		danie[3].name = "tatar wo³owy";
		danie[3].price = 19.00;

		danie[4].number = 5;
		danie[4].name = "krokity z grzybami i serem";
		danie[4].price = 16.00;

		danie[5].number = 6;
		danie[5].name = "kotlet schabowy";
		danie[5].price = 22.00;

		danie[6].number = 7;
		danie[6].name = "klopsy wieprzowe";
		danie[6].price = 20.00;

		danie[7].number = 8;
		danie[7].name = "kaczka pieczona";
		danie[7].price = 24.00;

		danie[8].number = 9;
		danie[8].name = "go³¹bek w sosie pomidorowym";
		danie[8].price = 18.00;

		danie[9].number = 10;
		danie[9].name = "pierogi ruskie";
		danie[9].price = 20.00;

		danie[10].number = 11;
		danie[10].name = "bigos";
		danie[10].price = 19.00;

		danie[11].number = 12;
		danie[11].name = "pierogi z miêsem";
		danie[11].price = 20.00;

		danie[12].number = 13;
		danie[12].name = "pierogi z kapust¹ i grzybami";
		danie[12].price = 20.00;

		danie[13].number = 14;
		danie[13].name = "pierogi z owocami";
		danie[13].price = 20.00;

		danie[14].number = 15;
		danie[14].name = "sernik";
		danie[14].price = 14.00;

		danie[15].number = 16;
		danie[15].name = "szarlotka z loudem";
		danie[15].price = 16.00;

		danie[16].number = 17;
		danie[16].name = "piwko dobre bo polskie";
		danie[16].price = 8.00;

		danie[17].number = 18;
		danie[17].name = "wódeczka ale zajebista 40 gram";
		danie[17].price = 10.00;

		danie[18].number = 19;
		danie[18].name = "somersbear czyli coœ dla dzieci i kobiet w ci¹¿y";
		danie[18].price = 9.00;

		danie[19].number = 20;
		danie[19].name = "woda z kranu 200ml";
		danie[19].price = 60.00;


		return ;
	}
};
