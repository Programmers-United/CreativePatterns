#ifndef NINJA_H
#define NINJA_H

#include "../pattern/Prototype.h"
#include <string>
#include <memory>

using namespace std;

class Ninja : public Prototype<Ninja> {
protected:
    string name;
    string description;
    string skill;

public:
    Ninja();
    Ninja(string name, string description, string skill);

    unique_ptr<Prototype<Ninja>> clone() const override;
    void info() const override;

    void setNameClone(string nameClone);
};

#endif //NINJA_H
