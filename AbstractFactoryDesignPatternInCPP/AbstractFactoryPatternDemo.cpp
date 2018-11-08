#include <iostream>

#include "FactoryProducer.h"

int main(int argc, char const *argv[]) {
  FactoryProducer factoryProducer;
  AbstractFactory* shapeFactory = factoryProducer.getFactory("SHAPE");
  AbstractFactory* colorFactory = factoryProducer.getFactory("COLOR");

  Shape* rect = shapeFactory->getShape("RECTANGLE");
  Shape* squr = shapeFactory->getShape("SQUARE");
  rect->draw();
  squr->draw();

  Color* red = colorFactory->getColor("RED");
  Color* blue = colorFactory->getColor("BLUE");
  red->fill();
  blue->fill();

  delete shapeFactory;
  delete colorFactory;
  delete rect;
  delete squr;
  delete red;
  delete blue;

  return 0;
}
