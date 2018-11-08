#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square: public Shape{
  void draw(){
    std::cout << "Inside Square::draw() method." << '\n';
  }
};

#endif
