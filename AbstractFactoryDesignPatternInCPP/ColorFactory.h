#ifndef COLORFACTORY_H
#define COLORFACTORY_H

#include "AbstractFactory.h"

class ColorFactory: public AbstractFactory{
public:
  Color* getColor(std::string color){
    if(!color.compare("RED"))
      return new Red();
    else if(!color.compare("BLUE"))
      return new Blue();
    else return NULL;
  }
};

#endif
