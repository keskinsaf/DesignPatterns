#include <iostream>
#include "Singleton.h"

int main(int argc, char const *argv[]) {
  Singleton::getInstance();
  Singleton::print();
  return 0;
}
