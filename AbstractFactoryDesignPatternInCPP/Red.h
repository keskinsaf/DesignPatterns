#ifndef RED_H
#define RED_H

#include "Color.h"

class Red: public Color{
  void fill(){
    std::cout << "Inside Red::fill() method." << '\n';
  }
};
#endif
