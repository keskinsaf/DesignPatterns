#ifndef BLUE_H
#define BLUE_H

#include "Color.h"

class Blue: public Color{
  void fill(){
    std::cout << "Inside Blue::fill() method." << '\n';
  }
};

#endif
