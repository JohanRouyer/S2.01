#include "database.h"

#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>

Database::Database() { }

bool Database::openDatabase()
{
    mydb = QSqlDatabase::addDatabase(CONNECT_TYPE);
    mydb.setDatabaseName(DATABASE_NAME);
    mydb.setUserName("jrouyer002_bd");
    mydb.setPassword("jrouyer002_bd");

    if(mydb.open())
    {
        return true;
    }
    else
    {
        qDebug() << mydb.lastError().text();
        return false;
    }
}

void Database::closeDatabase()
{
    mydb.close();
}



