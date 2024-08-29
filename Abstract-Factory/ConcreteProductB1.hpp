#ifndef CONCRETE_PRODUCT_B1_HPP
#define CONCRETE_PRODUCT_B1_HPP

#include "AbstractProductB.hpp"

using namespace std;

class ConcreteProductB1 : public AbstractProductB {
 public:
  string UsefulFunctionB() const override {
    return "The result of the product B1.";
  }

  string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const override {
    const string result = collaborator.UsefulFunctionA();
    return "The result of the B1 collaborating with ( " + result + " )";
  }
};

#endif
