#ifndef CONCRETE_FACTORY2_HPP
#define CONCRETE_FACTORY2_HPP

#include "AbstractFactory.hpp"
#include "ConcreteProductA2.hpp"
#include "ConcreteProductB2.hpp"

class ConcreteFactory2 : public AbstractFactory {
 public:
  AbstractProductA *CreateProductA() const override {
    return new ConcreteProductA2();
  }

  AbstractProductB *CreateProductB() const override {
    return new ConcreteProductB2();
  }
};

#endif
