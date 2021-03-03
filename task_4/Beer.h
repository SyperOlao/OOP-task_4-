#pragma once
#include "Drink.h"
class Beer :
    public Drink
{
private:
    bool color; //0-�����, 1-�������
public:
    virtual void heatUp(int temperature);
    
    Beer(bool color, std::string name, std::string taste, std::string smell, double volume) : Drink(name, taste, smell, volume) {
        this->color = color;
        type = "����";
    }
};

