#ifndef ABSTRACT_PRODUCT_A_HPP
#define ABSTRACT_PRODUCT_A_HPP

#include <string>

using namespace std;

class AbstractProductA {
 public:
  virtual ~AbstractProductA() {}
  virtual string UsefulFunctionA() const = 0;
};

#endif
