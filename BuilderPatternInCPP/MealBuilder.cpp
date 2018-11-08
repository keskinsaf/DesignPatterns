#include "MealBuilder.h"

Meal* MealBuilder::prepareVegMeal(){
  Meal* meal = new Meal();
  meal->addItem(new Vegan());
  meal->addItem(new Ayran());
  return meal;
}

Meal* MealBuilder::prepareNonVegMeal(){
  Meal* meal = new Meal();
  meal->addItem(new Chicken());
  meal->addItem(new Cola());
  return meal;
}
