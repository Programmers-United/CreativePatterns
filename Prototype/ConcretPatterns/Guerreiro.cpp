#include "Guerreiro.h"
using namespace std;

Guerreiro::Guerreiro() : name(""), description("") , power(""){}

Guerreiro::Guerreiro(string name, string description, string power) : name(name), description(description), power(power){}

unique_ptr<Prototype<Guerreiro> > Guerreiro::clone() const {
    return make_unique<Guerreiro>(*this);
}

void Guerreiro::info() const {
    cout << "Name: " << this->name <<  "\nDescription: " << this->description <<  "\nPower: " << this->power << endl;
}

void Guerreiro::setNameClone(string nameClone) {
    name = nameClone;
}


