#include <iostream>
#include "connection/Connection.h"

using namespace std;

int main() {
    Connection* conn1 = Connection::getInstance();
    cout << "Connection 1 is open: " << conn1->isOpen() << endl;

    Connection* conn2 = Connection::getInstance();
    cout << "Connection 2 is open: " << conn2->isOpen() << endl;

    if (conn1 == conn2) {
        cout << "Both instances are the same." << endl;
    } else {
        cout << "Instances are different!" << endl;
    }

    conn1->closeConnection();
    cout << "Connection 1 is open after closing: " << conn1->isOpen() << endl;
    cout << "Connection 2 is open after closing: " << conn2->isOpen() << endl;

    return 0;
}
