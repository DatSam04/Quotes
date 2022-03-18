#ifndef ADD_H
#define ADD_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>

namespace Ui {
class Add;
}

class Add : public QDialog
{
    Q_OBJECT
public:
    QSqlDatabase db;
    void connClose(){
        db.close();
        db.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool connOpen(){
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("/Users/datsam/Documents/SQLite3/quotes.db");
        if (db.open()){
            qDebug() << "Connection worked!";
            return true;
        } else{
            qDebug() << "Error: Connection failed";
            return false;
        }
    }
    QString select_author, author;
    QString select_category, category;
public:
    explicit Add(QWidget *parent = nullptr);
    ~Add();

private slots:
    void on_cancel_clicked();

    void on_add_data_clicked();

    void on_author_list_currentTextChanged(const QString &arg1);

    void on_category_list_currentTextChanged(const QString &arg1);

    void on_add_new_author_clicked();

    void on_add_new_category_clicked();

private:
    Ui::Add *ui;
};

#endif // ADD_H
