#ifndef WRAPPER_H
#define WRAPPER_H

#include "Package.h"

class Wrapper: public Package{
  public:
    std::string pack(){
      return "Wrapper";
  }
};

#endif
