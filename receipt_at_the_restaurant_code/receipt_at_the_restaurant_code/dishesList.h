#ifndef DISHESLIST_H
#include <vector>
#define DISHESLIST_H
#define	 LICZBA_DAN 20
using namespace std;

class Dish
{
public:
	int number;
	string name;
	double price;
	Dish(int number1, string name1, double price1) {
		number = number1;
		name = name1;
		price = price1;
	}
	Dish() {};
};

class DishesList {
	public:
		vector<Dish> getDishes();
};

#endif

