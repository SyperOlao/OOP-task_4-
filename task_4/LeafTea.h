#pragma once
#include "Drink.h"
class LeafTea :
    public Drink
{
public:
    void heatUp(int temperature) override;
    LeafTea(std::string name, std::string taste, std::string smell, double volume) : Drink(name, taste, smell, volume) { type = "чай листовой"; }
};

