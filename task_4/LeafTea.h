#pragma once
#include "Drink.h"
class LeafTea :
    public Drink
{
public:
    virtual void heatUp(int temperature);

    LeafTea(std::string name, std::string taste, std::string smell, double volume) : Drink(name, taste, smell, volume) { type = "чай листовой"; }
};

