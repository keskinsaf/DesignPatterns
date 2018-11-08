#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include "Red.h"
#include "Blue.h"
#include "Square.h"
#include "Rectangle.h"

class AbstractFactory{
public:
  virtual Color* getColor(std::string ){};
  virtual Shape* getShape(std::string ){};
};

#endif
