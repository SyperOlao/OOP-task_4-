#pragma once
#include "Drink.h"
#include <string>

class BagTea :
    public Drink
{
private:
    int gramInBag;

public:
    BagTea(int gramInBag, std::string name, std::string taste, std::string smell, double volume) : Drink(name, taste, smell, volume) {
        this->gramInBag = gramInBag;
        this->type = "чай в пакетике";
    }
	virtual void heatUp(int temperature) {
		if (temperature < 0) {
			taste += " со льдом";
			smell += " пахнет сильно";
			volume *= 1.1;
		}
		else if (temperature > 60 && temperature < 100) {
			taste = "гор€чее невкусное " + taste;
			smell += " ослабел";
		}
		else if (temperature > 100) {
			taste += "ќчень гор€чее невкусное ";
			smell = "не пахнет";
			volume *= 0.9;
		}
	}
    void setGramInBag(int gramInBag);
    int getGramInBag();
};

