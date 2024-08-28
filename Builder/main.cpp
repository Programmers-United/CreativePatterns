#include "./include/ConcreteComputerBuilder.hpp"
#include <iostream>

int main() {
    ConcreteComputerBuilder builder;
    Computer gamingPC = builder
        .setCPU("Intel i9")
        .setGPU("NVIDIA RTX 3080")
        .setRAM(32)
        .setStorageType(StorageType::SSD_NVME)
        .setStorageCapacity(1000)
        .build();

    gamingPC.showSpecs();

    getchar();
    return 0;
}
