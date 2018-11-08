#ifndef COLA_H
#define COLA_H

#include "Drink.h"

class Cola: public Drink{
  public:
    std::string name(){
      return "Cola";
    }
    float price(){
      return 30.0f;
    }
};

#endif
