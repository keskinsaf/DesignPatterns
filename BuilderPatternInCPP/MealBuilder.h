#ifndef MEALBUILDER_H
#define MEALBUILDER_H

#include "Meal.h"
#include "Ayran.h"
#include "Cola.h"
#include "Vegan.h"
#include "Chicken.h"

class MealBuilder{
  public:
    Meal* prepareVegMeal();
    Meal* prepareNonVegMeal();
};

#endif
