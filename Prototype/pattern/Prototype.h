#ifndef PROTOTYPE_H
#define PROTOTYPE_H

#include <iostream>
#include <memory>
using namespace std;

//Prototype com Template, mas poderia simplesmente realizar como se fosse uma interface
template <typename t>
class Prototype {
    public:
        virtual ~Prototype() {};
        virtual unique_ptr<Prototype<t>> clone() const = 0; //Metodo virtual puro para a clonagem de personagem
        virtual void info() const = 0; //Metodo virtual para a listagem das informações dos persongens
};

#endif // PROTOTYPE_H
