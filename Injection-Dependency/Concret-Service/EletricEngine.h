//
// Created by Silva on 19/08/2024.
//

#ifndef ELETRICENGINE_H
#define ELETRICENGINE_H

#include "../Service/IEngine.h"
#include <iostream>
using namespace std;

class EletricEngine: public IEngine {
    void start() const override {
        cout << "\nMotor eletrico em uso!" << endl;
    }

    string getType() const override {
        return "Motor eletrico";
    }
};

#endif //ELETRICENGINE_H
