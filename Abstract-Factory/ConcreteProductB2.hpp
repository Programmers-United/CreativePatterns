#ifndef CONCRETE_PRODUCT_B2_HPP
#define CONCRETE_PRODUCT_B2_HPP

#include "AbstractProductB.hpp"

using namespace std;

class ConcreteProductB2 : public AbstractProductB {
 public:
  string UsefulFunctionB() const override {
    return "The result of the product B2.";
  }

  string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const override {
    const string result = collaborator.UsefulFunctionA();
    return "The result of the B2 collaborating with ( " + result + " )";
  }
};

#endif
