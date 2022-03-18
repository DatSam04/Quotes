#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <add.h>
#include <QMessageBox>
#include <QRegExp>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

    //Setup database
    if (connOpen()){
        qDebug() << "Connection worked!";
    } else{
        qDebug() << "Error: Connection failed";
    }

    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery(db);

    QString q1 = "select quotes.quote_id, quotes.quote_content , authors.author_name, category.category from quotes\n";
    q1 += "inner join authors on authors.author_id=quotes.author_id\n";
    q1 += "inner join category on category.category_id=quotes.category_id";

    qry->prepare(q1);

    qry->exec();
    model->setQuery(*qry);
    // display data into homepage
    ui->table_home->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete addUI;
}


void MainWindow::on_btn_author_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    QSqlQueryModel *show_authors = new QSqlQueryModel();
    QSqlQuery *author_list = new QSqlQuery(db);
    author_list->prepare("select author_name from authors");
    author_list->exec();
    show_authors->setQuery(*author_list);
    //display list of author's quotes
    ui->author_list_name->setModel(show_authors);
}


void MainWindow::on_btn_fav_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery(db);
    //display list of favorite quotes
    QString q2 = "select * from quotes where favorite=1";

    qry->prepare(q2);

    qry ->exec();
    model ->setQuery(*qry);

    ui->favorite_quotes->setModel(model);
}


void MainWindow::on_btn_category_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    QSqlQueryModel *show_category = new QSqlQueryModel();
    QSqlQuery *category_list = new QSqlQuery(db);
    category_list->prepare("select category from category");
    category_list->exec();
    show_category->setQuery(*category_list);
    //display list of quotes in a category
    ui->category_list_name->setModel(show_category);
}


void MainWindow::on_btn_fav_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery(db);
    //display list of favorite quotes
    QString q2 = "select * from quotes where favorite=1";

    qry->prepare(q2);

    qry ->exec();
    model ->setQuery(*qry);

    ui->favorite_quotes->setModel(model);
}


void MainWindow::on_home_btn_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_btn_category_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    QSqlQueryModel *show_category = new QSqlQueryModel();
    QSqlQuery *category_list = new QSqlQuery(db);
    category_list->prepare("select category from category");
    category_list->exec();
    show_category->setQuery(*category_list);
    //display list of quotes in a category
    ui->category_list_name->setModel(show_category);
}


void MainWindow::on_home_btn_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_btn_author_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    QSqlQueryModel *show_authors = new QSqlQueryModel();
    QSqlQuery *author_list = new QSqlQuery(db);
    author_list->prepare("select author_name from authors");
    author_list->exec();
    show_authors->setQuery(*author_list);
    //display list of author's quotes
    ui->author_list_name->setModel(show_authors);
}


void MainWindow::on_btn_category_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    QSqlQueryModel *show_category = new QSqlQueryModel();
    QSqlQuery *category_list = new QSqlQuery(db);
    category_list->prepare("select category from category");
    category_list->exec();
    show_category->setQuery(*category_list);
    //display list of quotes in a category
    ui->category_list_name->setModel(show_category);
}


void MainWindow::on_home_btn_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_btn_author_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    QSqlQueryModel *show_authors = new QSqlQueryModel();
    QSqlQuery *author_list = new QSqlQuery(db);
    author_list->prepare("select author_name from authors");
    author_list->exec();
    show_authors->setQuery(*author_list);
    //display list of author's quotes
    ui->author_list_name->setModel(show_authors);
}


void MainWindow::on_btn_fav_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery(db);
    //display list of favorite quotes
    QString q1 = "select * from quotes where favorite=1";

    qry->prepare(q1);

    qry ->exec();
    model ->setQuery(*qry);

    ui->favorite_quotes->setModel(model);
}


void MainWindow::on_home_btn_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_btn_author_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    QSqlQueryModel *show_authors = new QSqlQueryModel();
    QSqlQuery *author_list = new QSqlQuery(db);
    author_list->prepare("select author_name from authors");
    author_list->exec();
    show_authors->setQuery(*author_list);
    //display list of author's quotes
    ui->author_list_name->setModel(show_authors);
}


void MainWindow::on_btn_fav_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery(db);
    //display list of favorite quotes
    QString q1 = "select * from quotes where favorite=1";

    qry->prepare(q1);

    qry ->exec();
    model ->setQuery(*qry);

    ui->favorite_quotes->setModel(model);
}


void MainWindow::on_btn_category_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    QSqlQueryModel *show_category = new QSqlQueryModel();
    QSqlQuery *category_list = new QSqlQuery(db);
    category_list->prepare("select category from category");
    category_list->exec();
    show_category->setQuery(*category_list);
    //display list of quotes in a category
    ui->category_list_name->setModel(show_category);
}

// add new quote
void MainWindow::on_btn_add_clicked()
{
    connClose();
    addUI = new Add(this);
    addUI->show();
    addUI->setModal(true);
    addUI->exec();
    connOpen();
}


void MainWindow::on_btn_add_2_clicked()
{
    connClose();
    addUI = new Add(this);
    addUI->show();
    addUI->setModal(true);
    addUI->exec();
    connOpen();
}


void MainWindow::on_btn_add_3_clicked()
{
    connClose();
    addUI = new Add(this);
    addUI->show();
    addUI->setModal(true);
    addUI->exec();
    connOpen();
}


void MainWindow::on_btn_add_4_clicked()
{
    connClose();
    addUI = new Add(this);
    addUI->show();
    addUI->setModal(true);
    addUI->exec();
    connOpen();
}


void MainWindow::on_btn_add_5_clicked()
{
    connClose();
    addUI = new Add(this);
    addUI->show();
    addUI->setModal(true);
    addUI->exec();
    connOpen();
}

void MainWindow::on_table_home_activated(const QModelIndex &index)
{
    QString val=ui->table_home->model()->data(index).toString();
    QSqlQuery qry;
    qry.prepare("select quotes.quote_id,quotes.quote_content,authors.author_name,category.category,quotes.author_id,quotes.category_id from quotes inner join authors on authors.author_id=quotes.author_id inner join category on category.category_id=quotes.category_id where quote_content='"+val+"'");
    if(qry.exec()){
        //Go to reading quote page
        ui->stackedWidget->setCurrentIndex(5);
        while(qry.next()){
            ui->show_quote_ID->setText(qry.value(0).toString());
            ui->show_quote->setText(qry.value(1).toString());
            ui->show_author->setText(qry.value(2).toString());
            ui->show_category->setText(qry.value(3).toString());
            ui->le_quote_ID->setText(qry.value(0).toString());
            ui->le_quote_edit->setText(qry.value(1).toString());
            ui->le_author->setText(qry.value(4).toString());
            ui->le_category->setText(qry.value(5).toString());
        }
    }
}


void MainWindow::on_cancel_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
//open edit quote page
void MainWindow::on_btn_edit_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
    QSqlQueryModel *show_authors = new QSqlQueryModel();
    QSqlQuery *author_list = new QSqlQuery(db);

    author_list->prepare("select author_name from authors");
    author_list->exec();
    show_authors->setQuery(*author_list);
    ui->author_list->setModel(show_authors);
    connClose();
    connOpen();
    QSqlQueryModel *show_categories = new QSqlQueryModel();
    QSqlQuery *category_list = new QSqlQuery(db);

    category_list->prepare("select category from category");
    category_list->exec();
    show_categories->setQuery(*category_list);
    ui->category_list->setModel(show_categories);
}

//submit edited version
void MainWindow::on_Edit_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    QString id, quote, author, category;
    id=ui->le_quote_ID->text();
    quote=ui->le_quote_edit->text();
    author=ui->le_author->text();
    category=ui->le_category->text();
    QSqlQuery qry;
    qry.prepare("update quotes set quote_content='"+quote+"',author_id='"+author+"',category_id='"+category+"' where quote_id='"+id+"'");

    if(qry.exec()){
        qDebug() << "Quote edited";
    }else{
        qDebug() << "Edited failed";
    }
}



void MainWindow::on_btn_delete_quote_clicked()
{
    // get the quote id and prep qry
    QString id;
    id=ui->show_quote_ID->text();
    QSqlQuery qry;
    qry.prepare("Delete from quotes where quote_id='"+id+"'");

    // pop up message box to confirm delete
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Delete?", "Are you sure you want to delete this quote?", QMessageBox::Yes|QMessageBox::No);

    // execute delete qry with the answer
    if (reply == QMessageBox::Yes) {
        if(qry.exec()){
            qDebug() << "Delete quote";
            ui->stackedWidget->setCurrentIndex(0);   // back to homepage after deleting quote
        }else{
            qDebug() << "Failed to delete quote";
        }
    }
    else {
        qDebug() << "Yes was not clicked";
    }
}


void MainWindow::on_btn_favorite_clicked()
{
    // get the quote id and prep query
    QString id;
    id=ui->show_quote_ID->text();
    QSqlQuery qry;
    qry.prepare("UPDATE quotes SET favorite = 1 WHERE quote_id = '"+id+"'");

    //pop up message box to confirm add the quote to the favorite list
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Favorite", "Add this quote to your favorite?", QMessageBox::Yes|QMessageBox::No);

    //execute delete qry with the answer
    if (reply == QMessageBox::Yes) {
        if(qry.exec()){
            qDebug() << "Added to favorite";

        }else{
            qDebug() << "Failed to add quote to favorite";
        }
    }
    else {
        qDebug() << "Yes was not clicked";
    }
}

void MainWindow::on_author_list_name_currentTextChanged(const QString &arg1)
{
    QString author=ui->author_list_name->currentText();
    QSqlQueryModel *author_quote = new QSqlQueryModel();
    QSqlQuery *selected_author = new QSqlQuery(db);

    selected_author->prepare("select quotes.quote_id,quotes.quote_content,authors.author_name,category.category from quotes inner join authors on authors.author_id=quotes.author_id inner join category on category.category_id=quotes.category_id where author_name='"+author+"'");
    selected_author->exec();
    author_quote->setQuery(*selected_author);
    ui->author_list_view->setModel(author_quote);
}


void MainWindow::on_category_list_name_currentTextChanged(const QString &arg1)
{
    QString category_name=ui->category_list_name->currentText();
    QSqlQueryModel *category_quote = new QSqlQueryModel();
    QSqlQuery *selected_category= new QSqlQuery(db);

    selected_category->prepare("select quotes.quote_id,quotes.quote_content,authors.author_name,category.category from quotes inner join authors on authors.author_id=quotes.author_id inner join category on category.category_id=quotes.category_id where category='"+category_name+"'");
    selected_category->exec();
    category_quote->setQuery(*selected_category);
    ui->category_list_view->setModel(category_quote);
}


void MainWindow::on_author_list_view_activated(const QModelIndex &index)
{
    QString val=ui->author_list_view->model()->data(index).toString();
    QSqlQuery qry;
    qry.prepare("select quotes.quote_id,quotes.quote_content,authors.author_name,category.category,quotes.author_id,quotes.category_id from quotes inner join authors on authors.author_id=quotes.author_id inner join category on category.category_id=quotes.category_id where quote_content='"+val+"'");
    if(qry.exec()){
        //Go to reading quote page
        ui->stackedWidget->setCurrentIndex(5);
        while(qry.next()){
            ui->show_quote_ID->setText(qry.value(0).toString());
            ui->show_quote->setText(qry.value(1).toString());
            ui->show_author->setText(qry.value(2).toString());
            ui->show_category->setText(qry.value(3).toString());
            ui->le_quote_ID->setText(qry.value(0).toString());
            ui->le_quote_edit->setText(qry.value(1).toString());
            ui->le_author->setText(qry.value(4).toString());
            ui->le_category->setText(qry.value(5).toString());
        }
    }
}


void MainWindow::on_favorite_quotes_activated(const QModelIndex &index)
{
    QString val=ui->favorite_quotes->model()->data(index).toString();
    QSqlQuery qry;
    qry.prepare("select quotes.quote_id,quotes.quote_content,authors.author_name,category.category,quotes.author_id,quotes.category_id from quotes inner join authors on authors.author_id=quotes.author_id inner join category on category.category_id=quotes.category_id where quote_content='"+val+"'");
    if(qry.exec()){
        //Go to reading quote page
        ui->stackedWidget->setCurrentIndex(5);
        while(qry.next()){
            ui->show_quote_ID->setText(qry.value(0).toString());
            ui->show_quote->setText(qry.value(1).toString());
            ui->show_author->setText(qry.value(2).toString());
            ui->show_category->setText(qry.value(3).toString());
            ui->le_quote_ID->setText(qry.value(0).toString());
            ui->le_quote_edit->setText(qry.value(1).toString());
            ui->le_author->setText(qry.value(4).toString());
            ui->le_category->setText(qry.value(5).toString());
        }
    }
}


void MainWindow::on_category_list_view_activated(const QModelIndex &index)
{
    QString val=ui->category_list_view->model()->data(index).toString();
    QSqlQuery qry;
    qry.prepare("select quotes.quote_id,quotes.quote_content,authors.author_name,category.category,quotes.author_id,quotes.category_id from quotes inner join authors on authors.author_id=quotes.author_id inner join category on category.category_id=quotes.category_id where quote_content='"+val+"'");
    if(qry.exec()){
        //Go to reading quote page
        ui->stackedWidget->setCurrentIndex(5);
        while(qry.next()){
            ui->show_quote_ID->setText(qry.value(0).toString());
            ui->show_quote->setText(qry.value(1).toString());
            ui->show_author->setText(qry.value(2).toString());
            ui->show_category->setText(qry.value(3).toString());
            ui->le_quote_ID->setText(qry.value(0).toString());
            ui->le_quote_edit->setText(qry.value(1).toString());
            ui->le_author->setText(qry.value(4).toString());
            ui->le_category->setText(qry.value(5).toString());
        }
    }
}

