#ifndef COMPUTER_HPP
#define COMPUTER_HPP

#include <string>
#include "./StorageType.hpp"

using namespace std;

class Computer {
public:
    string CPU;
    string GPU;
    int RAM;
    int storageCapacity;
    StorageType storageType;

    void showSpecs() const;
};

#endif // COMPUTER_HPP
