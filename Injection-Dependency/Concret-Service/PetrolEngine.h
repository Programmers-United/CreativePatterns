//
// Created by Silva on 19/08/2024.
//

#ifndef PETROLENGINE_H
#define PETROLENGINE_H

#include <iostream>
using namespace std;
#include <memory>
#include "../Service/IEngine.h"

class PetrolEngine: public IEngine {
    public:
        void start() const override {
            cout << "\nMotor a combustao em uso!" << endl;
        }

        string getType() const override {
            return "Motor a combustao";
        }
};

#endif //PETROLENGINE_H