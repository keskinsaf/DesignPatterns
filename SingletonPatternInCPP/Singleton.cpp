#include <iostream>
#include "Singleton.h"

Singleton& Singleton::getInstance(){
  static Singleton instance;
  return instance;
};
void Singleton::print(){
  std::cout << "Hello AT!" << '\n';
};
