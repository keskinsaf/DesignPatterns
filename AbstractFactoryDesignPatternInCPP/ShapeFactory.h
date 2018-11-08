#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H

#include "AbstractFactory.h"

class ShapeFactory: public AbstractFactory{
public:
  Shape* getShape(std::string input){
    if(!input.compare("RECTANGLE"))
      return new Rectangle();
    else if(!input.compare("SQUARE"))
      return new Square();
    else return NULL;
  }
};
#endif
