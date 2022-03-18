#include "database.h"
#include "ui_database.h"

#include "mainwindow.h"

Database::Database(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Database)
{
    ui->setupUi(this);

    //Setup database
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/Users/datsam/Documents/SQLite3/QUOTEDB.db");
    db.setDatabaseName("QUOTEDB.db");
}

Database::~Database()
{
    delete ui;
}

void Database::on_pushButton_clicked()
{
    db.open();
    if (db.open()){
        qDebug() << "Connection worked!";
    } else{
        qDebug() << "Error: Connection failed";
    }
    this->hide();
}

