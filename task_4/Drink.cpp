#include "Drink.h"

void Drink::heatUp(int temperature)
{
	if (temperature < 0) {
		taste = "Лёд";
		smell = "Нет";
		volume *= 1.1; //Жидкости при замезании увеличивают объем
	}
	else if (temperature > 100) {
		taste = "Горячо";
		smell = "Нет";
		volume *= 0.9; //При нагревании жидкость испаряется 
	}
}

std::string Drink::getName()
{
	return name;
}

std::string Drink::getTaste()
{
	return taste;
}

std::string Drink::getSmell()
{
	return smell;
}

std::string Drink::getType()
{
	return type;
}

double Drink::getVolume()
{
	return volume;
}

void Drink::setName(std::string name)
{
	this->name = name;
}

void Drink::setTaste(std::string taste)
{
	this->taste = taste;
}

void Drink::setSmell(std::string smell)
{
	this->smell = smell;
}

void Drink::setVolume(double volume)
{
	this->volume = volume;
}

Drink::Drink()
{
	this->type = "жидкость";
	this->name = "напиток";
	this->taste = "отсутвует";
	this->smell = "отсутвует";
	this->volume = 0;
}

Drink::Drink(std::string name, std::string taste, std::string smell, double volume)
{
	this->name = name;
	this->taste = taste;
	this->smell = smell;
	this->volume = volume;
}
