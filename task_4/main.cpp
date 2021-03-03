#include "Drink.h"
#include "BagTea.h"
#include "LeafTea.h"
#include "Cofe.h"
#include "Beer.h"
#include "Water.h"
#include <iostream>
#include <windows.h>
#include <list>

void showInfo(Drink* drink); 

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    std::cout << "Напитки:\n" << std::endl;


    BagTea bagTea(12, "липтон", "черный", "лимон", 350);
    Beer beer(1, "балтика 7", "хмельный", "спирт с хмелем", 500);
    Cofe cofe("черная карта", "кофейный с молоком", "кофейных зерен", 250);
    Water water("святой источник", 500);
    LeafTea leafTea("улун", "черный", "манго", 400);
    std::cout << "Если охладить напитки до " << -1 << " градусов:\n" << std::endl;
    cofe.heatUp(-1);
    bagTea.heatUp(-1);
    beer.heatUp(-1);
    leafTea.heatUp(-1)
        ;
    showInfo(&bagTea);
    showInfo(&cofe);
    showInfo(&water);
    showInfo(&leafTea);

    std::cout << "Если нагреть напитки до " << 101 << " градусов:\n" << std::endl;
    cofe.heatUp(101);
    bagTea.heatUp(101);
    beer.heatUp(101);
    leafTea.heatUp(101)
        ;
    showInfo(&bagTea);
    showInfo(&cofe);
    showInfo(&water);
    showInfo(&leafTea);

}


void showInfo(Drink* drink) {
    std::cout << "Тип напитка: " << drink->getType() << std::endl
        << "Название: " << drink->getName() << std::endl
        << "Запах: " << drink->getSmell() << std::endl
        << "Вкус: " << drink->getTaste() << std::endl
        << "Объем: " << drink->getVolume() << "мл.\n" << std::endl;
}
