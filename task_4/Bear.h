#pragma once
#include "Drink.h"
class Bear :
    public Drink
{
private:
    bool color; //0-�����, 1-�������
public:
    void heatUp(int temperature);
    
    Bear(bool color, std::string name, std::string taste, std::string smell, int volume) : Drink(name, taste, smell, volume) {
        this->color = color;
    }
};

