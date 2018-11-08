#ifndef BOTTLE_H
#define BOTTLE_H

#include "Package.h"

class Bottle: public Package{
  public:
    std::string pack(){
      return "Bottle";
    }
};

#endif
