#include "../include/Computer.hpp"
#include <iostream>

using namespace std;

string storageTypeToString(StorageType type) {
    switch (type) {
        case StorageType::SSD_NVME: return "SSD NVMe";
        case StorageType::SSD_SATA: return "SSD SATA";
        case StorageType::HD: return "HD";
        default: return "Unknown";
    }
}

void Computer::showSpecs() const {
    cout << "CPU: " << CPU <<  endl;
    cout << "GPU: " << GPU <<  endl;
    cout << "RAM: " << RAM << " GB" <<  endl;
    cout << "Storage Type: " << storageTypeToString(storageType)<<  endl;
    cout << "Storage Capacity: " << storageCapacity << " GB" << endl;
}
