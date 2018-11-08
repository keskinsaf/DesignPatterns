#ifndef VEGAN_H
#define VEGAN_H

#include "Burger.h"

class Vegan: public Burger{
  public:
    std::string name(){
      return "Vegan";
    }
    float price(){
      return 25.0f;
    }
};

#endif
