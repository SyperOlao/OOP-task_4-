#pragma once
#include "Drink.h"
class Water :
    public Drink
{
public:
    Water(std::string name, double volume) : Drink() {
        this->name = name; 
        this->volume = volume; 
        type = "����";
    }
    virtual void heatUp(int temperature) {
		if (temperature < 0) {
			taste += " �� �����";
			smell += " ������ ������";
			volume *= 1.1;
		}
		else if (temperature > 60 && temperature < 100) {
			taste = "������� ��������� " + taste;
			smell += " �������";
		}
		else if (temperature > 100) {
			taste += "����� ������� ��������� ";
			smell = "�� ������";
			volume *= 0.9;
		}
    }
};

