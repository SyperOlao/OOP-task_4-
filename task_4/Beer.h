#pragma once
#include "Drink.h"
class Beer :
    public Drink
{
private:
    bool color; //0-�����, 1-�������
public:
    void heatUp(int temperature) override;
    
    Beer(bool color, std::string name, std::string taste, std::string smell, double volume) : Drink(name, taste, smell, volume) {
        this->color = color;
        type = "����";
    }
};

