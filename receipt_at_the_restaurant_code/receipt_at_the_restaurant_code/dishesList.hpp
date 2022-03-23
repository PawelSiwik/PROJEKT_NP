#ifndef DISHESLIST_HPP
#define DISHESLIST_HPP

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
	auto getDishes();
};

#endif

