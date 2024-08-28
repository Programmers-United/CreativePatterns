#ifndef ABSTRACT_PRODUCT_B_HPP
#define ABSTRACT_PRODUCT_B_HPP

#include <string>
#include "AbstractProductA.hpp"

using namespace std;

class AbstractProductB {
 public:
  virtual ~AbstractProductB() {}
  virtual string UsefulFunctionB() const = 0;
  virtual string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const = 0;
};

#endif
