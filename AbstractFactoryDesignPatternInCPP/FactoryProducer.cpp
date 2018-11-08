#include "FactoryProducer.h"

AbstractFactory* FactoryProducer::getFactory(std::string input){
  if(!input.compare("SHAPE")){
    return new ShapeFactory();
  }
  else if(!input.compare("COLOR")){
    return new ColorFactory();
  }

  else return NULL;
}
