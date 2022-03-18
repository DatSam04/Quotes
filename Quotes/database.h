#ifndef DATABASE_H
#define DATABASE_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDataWidgetMapper>
#include <QSqlError>
#include <QLineEdit>
#include <QDebug>

#include "mainwindow.h"

namespace Ui {
class Database;
}

class Database : public QDialog
{
    Q_OBJECT

public:
    QSqlDatabase db;
    explicit Database(QWidget *parent = nullptr);
    ~Database();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Database *ui;
};

#endif // DATABASE_H
