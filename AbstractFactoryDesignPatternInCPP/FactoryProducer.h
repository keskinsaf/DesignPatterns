#ifndef FACTORYPRODUCER_H
#define FACTORYPRODUCER_H

#include "AbstractFactory.h"
#include "ShapeFactory.h"
#include "ColorFactory.h"

class FactoryProducer{
public:
  AbstractFactory* getFactory(std::string);
};

#endif
