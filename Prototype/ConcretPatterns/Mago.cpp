#include "Mago.h"

Mago::Mago() {}

Mago::Mago(string name, string description, string typeMago) : name(name), description(description), typeMago(typeMago) {}


unique_ptr<Prototype<Mago> > Mago::clone() const {
    return make_unique<Mago>(*this);
}

void Mago::info() const {
    cout << "Mago: " << name << "\nDescription: " << description << "\nTipo de mago: " << typeMago << endl;
}

void Mago::setNameClone(string nameClone) {
    name = nameClone;
}
