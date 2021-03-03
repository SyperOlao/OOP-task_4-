#include "Drink.h"
#include "BagTea.h"
#include "LeafTea.h"
#include "Cofe.h"
#include "Beer.h"
#include "Water.h"
#include <iostream>
#include <windows.h>

void ShowInfo(Drink* drink); 

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    BagTea bagTea(12, "липтон", "черный", "лимон", 350);
    Beer bear(1,"балтика 7", "хмельный", "спирт с хмелем",500);
    Cofe cofe("черная карта", "кофейный с молоком","кофейных зерен", 250);
    Water water("святой источник", 500);
    LeafTea leafTea("улун", "черный", "манго", 400);

    std::cout << "Напитки:\n" << std::endl;
    
    ShowInfo(&bagTea);
    ShowInfo(&bear);
    ShowInfo(&cofe);
    ShowInfo(&water);
    ShowInfo(&leafTea);

}

void ShowInfo(Drink* drink) {
    std::cout << "Название: " << drink->getName()<< std::endl
     << "Запах: " << drink->getSmell() << std::endl
     << "Вкус: " << drink->getTaste() << std::endl
     << "Объем: " << drink->getVolume() << "мл." << std::endl << std::endl;
}
