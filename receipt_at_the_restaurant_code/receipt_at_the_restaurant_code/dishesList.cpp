#include <iostream>
#include <string>
#include <vector>
#include "dishesList.h"
#define	 LICZBA_DAN 20


using namespace std;


	vector <Dish> DishesList::getDishes() {
		vector <Dish> dish;
		Dish dish1;
		
		dish1.number = 1;
		dish1.name = "rosó³ z makaronem";
		dish1.price = 13.00;
		dish.push_back(dish1);

		dish1.number = 2;
		dish1.name = "pomidorowa z ry¿em";
		dish1.price = 15.00;
		dish.push_back(dish1);

		dish1.number = 3;
		dish1.name = "barszcz z uszkami";
		dish1.price = 15.00;
		dish.push_back(dish1);

		dish1.number = 4;
		dish1.name = "tatar wo³owy";
		dish1.price = 19.00;
		dish.push_back(dish1);

		dish1.number = 5;
		dish1.name = "krokity z grzybami i serem";
		dish1.price = 16.00;
		dish.push_back(dish1);

		dish1.number = 6;
		dish1.name = "kotlet schabowy";
		dish1.price = 22.00;
		dish.push_back(dish1);

		dish1.number = 7;
		dish1.name = "klopsy wieprzowe";
		dish1.price = 20.00;
		dish.push_back(dish1);

		dish1.number = 8;
		dish1.name = "kaczka pieczona";
		dish1.price = 24.00;
		dish.push_back(dish1);

		dish1.number = 9;
		dish1.name = "go³¹bek w sosie pomidorowym";
		dish1.price = 18.00;
		dish.push_back(dish1);

		dish1.number = 10;
		dish1.price = 20.00;
		dish1.name = "pierogi ruskie";
		dish.push_back(dish1);

		dish1.number = 11;
		dish1.name = "bigos";
		dish1.price = 19.00;
		dish.push_back(dish1);

		dish1.number = 12;
		dish1.name = "pierogi z miêsem";
		dish1.price = 20.00;
		dish.push_back(dish1);

		dish1.number = 13;
		dish1.name = "pierogi z kapust¹ i grzybami";
		dish1.price = 20.00;
		dish.push_back(dish1);

		dish1.number = 14;
		dish1.name = "pierogi z owocami";
		dish1.price = 20.00;
		dish.push_back(dish1);

		dish1.number = 15;
		dish1.name = "sernik";
		dish1.price = 14.00;
		dish.push_back(dish1);

		dish1.number = 16;
		dish1.name = "szarlotka z loudem";
		dish1.price = 16.00;
		dish.push_back(dish1);

		dish1.number = 17;
		dish1.name = "piwko dobre bo polskie";
		dish1.price = 8.00;
		dish.push_back(dish1);

		dish1.number = 18;
		dish1.name = "wódeczka ale zajebista 40 gram";
		dish1.price = 10.00;
		dish.push_back(dish1);

		dish1.number = 19;
		dish1.name = "somersbear czyli coœ dla dzieci i kobiet w ci¹¿y";
		dish1.price = 9.00;
		dish.push_back(dish1);

		dish1.number = 20;
		dish1.price = 60.00;
		dish1.name = "woda z kranu 200ml";
		dish.push_back(dish1);

		return dish;
	}
