#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QDebug>
#include <add.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    QString edit_quote, edit_author, edit_category;
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
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_author_clicked();

    void on_btn_fav_clicked();

    void on_btn_category_clicked();

    void on_btn_fav_2_clicked();

    void on_home_btn_3_clicked();

    void on_btn_category_2_clicked();

    void on_home_btn_2_clicked();

    void on_btn_author_3_clicked();

    void on_btn_category_3_clicked();

    void on_home_btn_4_clicked();

    void on_btn_author_4_clicked();

    void on_btn_fav_4_clicked();

    void on_home_btn_5_clicked();

    void on_btn_author_5_clicked();

    void on_btn_fav_5_clicked();

    void on_btn_category_5_clicked();

    void on_btn_add_clicked();

    void on_btn_add_2_clicked();

    void on_btn_add_3_clicked();

    void on_btn_add_4_clicked();

    void on_btn_add_5_clicked();

    void on_btn_edit_clicked();

    void on_table_home_activated(const QModelIndex &index);

    void on_cancel_clicked();

    void on_pushButton_6_clicked();

    void on_Edit_clicked();

    void on_btn_favorite_clicked();

    void on_btn_delete_quote_clicked();

    void on_author_list_name_currentTextChanged(const QString &arg1);

    void on_category_list_name_currentTextChanged(const QString &arg1);

    void on_author_list_view_activated(const QModelIndex &index);

    void on_favorite_quotes_activated(const QModelIndex &index);

    void on_category_list_view_activated(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
    Add *addUI;
};
#endif // MAINWINDOW_H
