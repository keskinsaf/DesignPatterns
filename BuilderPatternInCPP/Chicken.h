#ifndef CHICKEN_H
#define CHICKEN_H

#include "Burger.h"

class Chicken: public Burger{
  public:
    std::string name(){
      return "Chicken";
    }
    float price(){
      return 50.5f;
    }
};

#endif
