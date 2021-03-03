#pragma once
#include "Drink.h"
class Water :
    public Drink
{
public:
    Water(std::string name, double volume) : Drink() {
        this->name = name; 
        this->volume = volume; 
    }
};

