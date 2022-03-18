#include "add.h"
#include "ui_add.h"
#include <QMessageBox>

Add::Add(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add)
{
    ui->setupUi(this);

    if (connOpen()){
        qDebug() << "Connection worked!";
    } else{
        qDebug() << "Error: Connection failed";
    }
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

Add::~Add()
{
    delete ui;
}

void Add::on_cancel_clicked()
{
    connClose();
    Add::close();
}

void Add::on_author_list_currentTextChanged(const QString &arg1)
{
    select_author=ui->author_list->currentText();
    QSqlQuery qry;
    qry.prepare("select * from authors where author_name='"+select_author+"'");

    if(qry.exec()){
        while(qry.next()){
            ui->le_author->setText(qry.value(0).toString());
        }
    }
}


void Add::on_category_list_currentTextChanged(const QString &arg1)
{
    select_category=ui->category_list->currentText();
    QSqlQuery qry;
    qry.prepare("select * from category where category='"+select_category+"'");

    if(qry.exec()){
        while(qry.next()){
            ui->le_cgy->setText(qry.value(0).toString());
        }
    }
}

void Add::on_add_data_clicked()
{
    QString quote, author, category;
    quote=ui->le_quote->text();
    author=ui->le_author->text();
    category=ui->le_cgy->text();
    QSqlQuery qry;
    qry.prepare("insert into quotes (quote_content,author_id,category_id) values ('"+quote+"','"+author+"','"+category+"')");
    if(qry.exec()){
        QMessageBox::critical(this,tr("Save"), tr("Saved"));
    }else{
        QMessageBox::critical(this,tr("error"), tr("Failed to add data"));
    }
}

void Add::on_add_new_author_clicked()
{
    QString new_author=ui->add_author->text();
    QSqlQuery qry;
    qry.prepare("insert into authors (author_name) values ('"+new_author+"')");
    if(qry.exec()){
        QMessageBox::critical(this,tr("new authors"), tr("add new author complete"));
    }else{
        QMessageBox::critical(this,tr("error"), tr("Failed to add new author"));
    }
}


void Add::on_add_new_category_clicked()
{
    QString new_category=ui->add_category->text();
    QSqlQuery qry;
    qry.prepare("insert into category (category) values ('"+new_category+"')");
    if(qry.exec()){
        QMessageBox::critical(this,tr("new category"), tr("add new category complete"));
    }else{
        QMessageBox::critical(this,tr("error"), tr("Failed to add new category"));
    }
}

