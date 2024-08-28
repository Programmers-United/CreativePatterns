#include "../include/ConcreteComputerBuilder.hpp"

ConcreteComputerBuilder& ConcreteComputerBuilder::setCPU(const std::string& cpu) {
    computer.CPU = cpu;
    return *this;
}

ConcreteComputerBuilder& ConcreteComputerBuilder::setGPU(const std::string& gpu) {
    computer.GPU = gpu;
    return *this;
}

ConcreteComputerBuilder& ConcreteComputerBuilder::setRAM(int ram) {
    computer.RAM = ram;
    return *this;
}

ConcreteComputerBuilder& ConcreteComputerBuilder::setStorageType(StorageType storageType) {
    computer.storageType = storageType;
    return *this;
}

ConcreteComputerBuilder& ConcreteComputerBuilder::setStorageCapacity(int storageCapacity) {
    computer.storageCapacity = storageCapacity;
    return *this;
}

Computer ConcreteComputerBuilder::build() {
    return computer;
}
