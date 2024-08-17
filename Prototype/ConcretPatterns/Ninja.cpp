#include "Ninja.h"

Ninja::Ninja() : name(""), description(""), skill("") {}

Ninja::Ninja(string name, string description, string skill) : name(name), description(description), skill(skill) {}

unique_ptr<Prototype<Ninja>> Ninja::clone() const {
    return make_unique<Ninja>(*this);
}

void Ninja::info() const {
    cout << "Name: " << name << "\nDescription: " << description << "\nSkill: " << skill << endl;
}

void Ninja::setNameClone(string nameClone) {
    name = nameClone;
}