#ifndef CONCRETECOMPUTERBUILDER_HPP
#define CONCRETECOMPUTERBUILDER_HPP

#include "ComputerBuilder.hpp"

class ConcreteComputerBuilder : public ComputerBuilder {
private:
    Computer computer;

public:
    ConcreteComputerBuilder& setCPU(const std::string& cpu) override;
    ConcreteComputerBuilder& setGPU(const std::string& gpu) override;
    ConcreteComputerBuilder& setRAM(int ram) override;
    ConcreteComputerBuilder& setStorageType(StorageType storageType) override;
    ConcreteComputerBuilder& setStorageCapacity(int storageCapacity) override;
    Computer build() override;
};

#endif // CONCRETECOMPUTERBUILDER_HPP
