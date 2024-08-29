#ifndef CONNECTION_H
#define CONNECTION_H

class Connection {
private:
    static Connection* INSTANCE;
    bool open;
    Connection();

public:
    static Connection* getInstance();
    bool isOpen();
    void closeConnection();
    ~Connection();
};

#endif