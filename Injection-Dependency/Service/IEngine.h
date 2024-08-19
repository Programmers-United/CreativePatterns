//
// Created by Silva on 19/08/2024.
//

#ifndef IENGINE_H
#define IENGINE_H

#include <iostream>
#include <memory>
using namespace std;

class IEngine {
public:
    virtual void start() const = 0; //Metodo para iniciar a engine
    virtual string getType() const = 0;  // Adicionando o metodo getType
    virtual ~IEngine() = default; //Destructor
};

#endif //IENGINE_H
