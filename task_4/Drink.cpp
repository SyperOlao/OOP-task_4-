#include "Drink.h"

void Drink::heatUp(int temperature)
{
	if (temperature < 0) {
		taste = "˸�";
		smell = "���";
		volume *= 1.1; //�������� ��� ��������� ����������� �����
	}
	else if (temperature > 100) {
		taste = "������";
		smell = "���";
		volume *= 0.9; //��� ���������� �������� ���������� 
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

int Drink::getVolume()
{
	return 0;
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

void Drink::setVolume(int volume)
{
	this->volume = volume;
}

Drink::Drink()
{
	this->name = "�������";
	this->taste = "���������";
	this->smell = "���������";
	this->volume = 0;
}

Drink::Drink(std::string name, std::string taste, std::string smell, int volume)
{
	this->name = name;
	this->taste = taste;
	this->smell = smell;
	this->volume = volume;
}
