#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle: public Shape{
  void draw(){
    std::cout << "Inside Rectangle::draw() method." << '\n';
  }
};

#endif
