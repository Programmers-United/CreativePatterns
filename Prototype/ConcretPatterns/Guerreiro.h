#ifndef GUERREIRO_H
#define GUERREIRO_H

#include "../pattern/Prototype.h"
using namespace std;

class Guerreiro: public Prototype<Guerreiro>{
    protected:
        string name;
        string description;
        string power;

    public:
        Guerreiro();
        Guerreiro(string name, string description, string power);

        unique_ptr<Prototype<Guerreiro>> clone() const override;
        void info() const override;

        void setNameClone(string nameClone);
};

#endif //GUERREIRO_H
