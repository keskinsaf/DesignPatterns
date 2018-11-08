#ifndef AYRAN_H
#define AYRAN_H

#include "Drink.h"

class Ayran: public Drink{
  public:
    std::string name(){
      return "Ayran";
    }
    float price(){
      return 20.0f;
    }
};

#endif
