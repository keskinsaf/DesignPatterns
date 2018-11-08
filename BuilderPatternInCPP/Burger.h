#ifndef BURGER_H
#define BURGER_H

#include "Item.h"

class Burger: public Item{
  public:
    Package* packing(){
      return new Wrapper();
    }
    virtual float price() = 0;
};

#endif
