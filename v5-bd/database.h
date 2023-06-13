#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>

#define DATABASE_NAME "BD_Nodenot_Lakartxela"
#define CONNECT_TYPE "QODBC"
#define USER_NAME "apommiez001_bd"
#define USER_PASS "apommiez001_bd"

class Database {
public:
    Database();
    bool openDatabase();
    void closeDatabase();

private:
    QSqlDatabase mydb;
};

#endif // DATABASE_H
