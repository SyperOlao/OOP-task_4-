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
    }

    void setGramInBag(int gramInBag);
    int getGramInBag();
};

