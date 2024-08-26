#ifndef CONCRETE_PRODUCT_A1_HPP
#define CONCRETE_PRODUCT_A1_HPP

#include "AbstractProductA.hpp"

using namespace std;

class ConcreteProductA1 : public AbstractProductA {
 public:
  string UsefulFunctionA() const override {
    return "The result of the product A1.";
  }
};

#endif
