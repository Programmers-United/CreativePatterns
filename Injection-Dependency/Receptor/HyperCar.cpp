//
// Created by Silva on 19/08/2024.
//

#include "HyperCar.h"
#include <iostream>
using namespace std;

//O motor é injetado no construtor
HyperCar::HyperCar(shared_ptr<IEngine> eng) : engine(move(eng)) {}

void HyperCar::drive() const {
    engine->start();
    cout << "Hypercar em movimento!\n" << endl;
}

string HyperCar::getEngineType() const {
    return engine->getType();
}

void HyperCar::changeEngine(shared_ptr<IEngine> engine) {
    this->engine = move(engine);
}