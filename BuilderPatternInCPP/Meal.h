#ifndef MEAL_H
#define MEAL_H

#include "Item.h"
#include <vector>

class Meal{
    std::vector<Item*> items;
  public:
    void addItem(Item* item);
    float getCost();
    void showItems();
};

#endif
