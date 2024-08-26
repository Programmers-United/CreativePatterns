#ifndef CONCRETE_PRODUCT_A2_HPP
#define CONCRETE_PRODUCT_A2_HPP

#include "AbstractProductA.hpp"

using namespace std;

class ConcreteProductA2 : public AbstractProductA {
 public:
  string UsefulFunctionA() const override {
    return "The result of the product A2.";
  }
};

#endif
