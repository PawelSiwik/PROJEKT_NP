#include <iostream>
#include <string>
#include "dishesList.hpp"
#define LIMIT 100
using namespace std;

class Order
{
public:
	int trableNumber;
	int dishNumber[LIMIT];
	double price[LIMIT];
	string dishName[LIMIT];
};

class Orders
{
public:
	Order order[LIMIT];
};




int main()
{
	setlocale(LC_ALL, "");
	cout << "-" << endl;


}
