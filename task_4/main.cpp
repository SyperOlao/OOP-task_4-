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
std::list <Drink> inputList();
void heatAndShow(std::list <Drink> drinks, int temp);
void inputList2(std::list <Drink>* drinks);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    std::list <Drink> drinks = inputList();
    /*inputList2(&drinks);*/

    std::cout << "Напитки:\n" << std::endl;

   /* for (Drink drink : drinks) {
        showInfo(&drink);
    }*/
   
    BagTea bagTea(12, "липтон", "черный", "лимон", 350);
    Beer beer(1, "балтика 7", "хмельный", "спирт с хмелем", 500);
    Cofe cofe("черная карта", "кофейный с молоком", "кофейных зерен", 250);
    Water water("святой источник", 500);
    LeafTea leafTea("улун", "черный", "манго", 400);
    std::cout << "Если нагреть напитки до " << -1 << " градусов:\n" << std::endl;
    cofe.heatUp(-1);
    showInfo(&cofe);
    heatAndShow(drinks, -1);
    //heatAndShow(&drinks, 60);
    //heatAndShow(&drinks, 110);

 /*   std::cout << "Если нагреть напитки до " << -1 << " градусов:\n" << std::endl;
    for (Drink &drink : drinks) {
        drink.heatUp(-1);
        showInfo(&drink);
    }*/

  /*  std::cout << "Если нагреть напитки до " << 101 << " градусов:\n" << std::endl;
    for (Drink drink : drinks) {
        drink.heatUp(101);
        showInfo(&drink);
    }*/
}

void heatAndShow(std::list <Drink> drinks, int temp) {
    std::cout << "Если нагреть напитки до "<< temp <<" градусов:\n" << std::endl;
    for (Drink drink : drinks) {
        drink.heatUp(temp);
        showInfo(&drink);
    }
}

std::list <Drink> inputList() {
    std::list <Drink> drinks;
    drinks.push_back(BagTea(12, "липтон", "черный", "лимон", 350));
    drinks.push_back(Beer(1, "балтика 7", "хмельный", "спирт с хмелем", 500));
    drinks.push_back(Cofe("черная карта", "кофейный с молоком", "кофейных зерен", 250));
    drinks.push_back(Water("святой источник", 500));
    drinks.push_back(LeafTea("улун", "черный", "манго", 400));
    return drinks;
    
}

void inputList2(std::list <Drink> *drinks) {
    
    //drinks->push_back(BagTea(12, "липтон", "черный", "лимон", 350));
    drinks->push_back(Beer(1, "балтика 7", "хмельный", "спирт с хмелем", 500));
    drinks->push_back(Cofe("черная карта", "кофейный с молоком", "кофейных зерен", 250));
   /* drinks->push_back(Water("святой источник", 500));
    drinks->push_back(LeafTea("улун", "черный", "манго", 400));*/
   

}

void showInfo(Drink* drink) {
    std::cout << "Тип напитка: " << drink->getType() << std::endl
        << "Название: " << drink->getName() << std::endl
        << "Запах: " << drink->getSmell() << std::endl
        << "Вкус: " << drink->getTaste() << std::endl
        << "Объем: " << drink->getVolume() << "мл.\n" << std::endl;
}
