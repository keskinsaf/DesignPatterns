#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton{
  Singleton(){};
  Singleton(Singleton const&);
  void operator=(Singleton const&);
public:
  static Singleton& getInstance();
  static void print();
};
#endif
