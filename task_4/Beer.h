#pragma once
#include "Drink.h"
class Beer :
    public Drink
{
private:
    bool color; //0-темноё, 1-светлое
public:
    virtual void heatUp(int temperature);
    
    Beer(bool color, std::string name, std::string taste, std::string smell, double volume) : Drink(name, taste, smell, volume) {
        this->color = color;
        type = "пиво";
    }
};

