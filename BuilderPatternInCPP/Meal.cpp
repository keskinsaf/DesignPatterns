#include "Meal.h"

void Meal::addItem(Item* item){
  items.push_back(item);
}

float Meal::getCost(){
  float cost = 0.0f;

  for (std::vector<Item*>::iterator item = items.begin(); item != items.end(); ++item) {
    cost += (*item)->price();
  }
  return cost;
}

void Meal::showItems(){
  for ( std::vector<Item*>::iterator item = items.begin(); item != items.end(); ++item ) {
    std::cout << "Item name: " << (*item)->name() << " , Packing: " << (*item)->packing()->pack() << " , Price: " << (*item)->price() << '\n';
  }
}
