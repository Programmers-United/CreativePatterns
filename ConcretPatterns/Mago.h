#ifndef MAGO_H
#define MAGO_H

#include "../pattern/Prototype.h"
using namespace std;

class Mago : public Prototype<Mago>{
    protected:
        string name;
        string description;
        string typeMago;

    public:
    Mago();
    Mago(string name, string description, string typeMago);
    unique_ptr<Prototype<Mago>> clone() const override;
    void info() const override;

    void setNameClone(string nameClone);
};

#endif //MAGO_H
