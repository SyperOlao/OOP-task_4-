#pragma once
#include "Drink.h"
class Cofe :
    public Drink
{
public:
    void heatUp(int temperature) override;

    Cofe(std::string name, std::string taste, std::string smell, double volume) : Drink(name, taste, smell, volume) { this->type ="кофе"; }
};

