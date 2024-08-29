//
// Created by Silva on 19/08/2024.
//

#ifndef HYPERCAR_H
#define HYPERCAR_H

#include <iostream>
#include <memory>
using namespace std;
#include "../Service/IEngine.h"

class HyperCar {

    private:
        shared_ptr<IEngine> engine;

    public:
        HyperCar(shared_ptr<IEngine> eng); //Constructor
        void drive() const; //Função para dirigir
        string getEngineType() const; //Função para lista a engine do motor
        void changeEngine(shared_ptr<IEngine> engine); //Função para mudar a engine do motor
};



#endif //HYPERCAR_H
