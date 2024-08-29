#ifndef COMPUTERBUILDER_HPP
#define COMPUTERBUILDER_HPP

#include "Computer.hpp"

using namespace std;

class ComputerBuilder {
public:
    virtual ~ComputerBuilder() = default;
    virtual ComputerBuilder& setCPU(const string& cpu) = 0;
    virtual ComputerBuilder& setGPU(const string& gpu) = 0;
    virtual ComputerBuilder& setRAM(int ram) = 0;
    virtual ComputerBuilder& setStorageType(StorageType storageType) = 0;
    virtual ComputerBuilder& setStorageCapacity(int storageCapacity) = 0;
    virtual Computer build() = 0;
};

#endif // COMPUTERBUILDER_HPP
