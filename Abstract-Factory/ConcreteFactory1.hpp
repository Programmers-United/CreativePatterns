#ifndef CONCRETE_FACTORY1_HPP
#define CONCRETE_FACTORY1_HPP

#include "AbstractFactory.hpp"
#include "ConcreteProductA1.hpp"
#include "ConcreteProductB1.hpp"

class ConcreteFactory1 : public AbstractFactory {
 public:
  AbstractProductA *CreateProductA() const override {
    return new ConcreteProductA1();
  }

  AbstractProductB *CreateProductB() const override {
    return new ConcreteProductB1();
  }
};

#endif
