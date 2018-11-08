#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include "Wrapper.h"
#include "Bottle.h"

class Item{
  public:
    virtual std::string name() = 0;
    virtual Package* packing() = 0;
    virtual float price() = 0;
};

#endif
