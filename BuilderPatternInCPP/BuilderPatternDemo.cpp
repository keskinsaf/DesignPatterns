#include <iostream>

#include "MealBuilder.h"

int main(int argc, char const *argv[]) {
  MealBuilder mealBuilder;
  Meal* vegMeal = mealBuilder.prepareVegMeal();
  std::cout << "VegMeal: " << '\n';
  vegMeal->showItems();
  std::cout << "Total cost: " << vegMeal->getCost() <<  '\n';

  Meal* nonVegMeal = mealBuilder.prepareNonVegMeal();
  std::cout << "NonVegMeal: " << '\n';
  nonVegMeal->showItems();
  std::cout << "Total cost: " << nonVegMeal->getCost() << '\n';

  delete vegMeal, nonVegMeal;

  return 0;
}
