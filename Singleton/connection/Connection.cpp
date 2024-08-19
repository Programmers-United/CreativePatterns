#include <iostream>
#include "Connection.h"

using namespace std;

// Inicializa a instância estática como nullptr
Connection* Connection::INSTANCE = nullptr;

Connection* Connection::getInstance() {
    if (INSTANCE == nullptr) {
        cout << "Connection is not defined. Creating..." << endl;
        INSTANCE = new Connection();
    }
    return INSTANCE;
}

bool Connection::isOpen() {
    return open;
}

void Connection::closeConnection() {
    this->open = false;
}

Connection::Connection() {
    this->open = true;
}

Connection::~Connection() {}