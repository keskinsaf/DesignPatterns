#ifndef DRINK_H
#define DRINK_H

#include "Item.h"

class Drink: public Item{
  public:
    Package* packing(){
      return new Bottle();
    }
    virtual float price() = 0;
};

#endif
