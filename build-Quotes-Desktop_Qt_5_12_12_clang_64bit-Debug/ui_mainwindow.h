/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd_to_Favorite;
    QAction *actionEdit;
    QAction *actionDelete;
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *home_pg;
    QFrame *frame;
    QPushButton *btn_category;
    QPushButton *btn_fav;
    QPushButton *btn_author;
    QPushButton *btn_add;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTableView *table_home;
    QPushButton *home_btn;
    QWidget *author_pg;
    QLabel *label_author;
    QListView *listView;
    QFrame *frame_2;
    QPushButton *btn_category_2;
    QPushButton *btn_fav_2;
    QPushButton *btn_author_2;
    QPushButton *btn_add_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QPushButton *home_btn_3;
    QWidget *fav_pg;
    QLabel *label_author_2;
    QFrame *frame_3;
    QPushButton *btn_category_3;
    QPushButton *btn_fav_3;
    QPushButton *btn_author_3;
    QPushButton *btn_add_3;
    QLabel *label_4;
    QTableView *tableView;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_3;
    QPushButton *home_btn_2;
    QWidget *cgy_page;
    QLabel *label_cgy;
    QListView *listView_2;
    QFrame *frame_4;
    QPushButton *btn_category_4;
    QPushButton *btn_fav_4;
    QPushButton *btn_author_4;
    QPushButton *btn_add_4;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_4;
    QPushButton *home_btn_4;
    QWidget *list_page;
    QFrame *frame_5;
    QPushButton *btn_category_5;
    QPushButton *btn_fav_5;
    QPushButton *btn_author_5;
    QPushButton *btn_add_5;
    QLabel *label_6;
    QLabel *label_cgy_2;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_5;
    QPushButton *home_btn_5;
    QTableView *tableView_2;
    QWidget *read_page;
    QTextBrowser *textBrowser_quote;
    QTextBrowser *textBrowser_author;
    QTextBrowser *textBrowser_category;
    QPushButton *btn_edit;
    QPushButton *btn_edit_2;
    QPushButton *btn_edit_3;
    QPushButton *pushButton_6;
    QWidget *edit_page;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *le_author;
    QLineEdit *le_author_2;
    QDialogButtonBox *buttonBox;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionAdd_to_Favorite = new QAction(MainWindow);
        actionAdd_to_Favorite->setObjectName(QString::fromUtf8("actionAdd_to_Favorite"));
        actionEdit = new QAction(MainWindow);
        actionEdit->setObjectName(QString::fromUtf8("actionEdit"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 791, 561));
        stackedWidget->setStyleSheet(QString::fromUtf8("QStackedWidget {\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0.903409, stop:0 rgba(18, 22, 29, 255), stop:1 rgba(55, 59, 72, 255));\n"
"}"));
        home_pg = new QWidget();
        home_pg->setObjectName(QString::fromUtf8("home_pg"));
        frame = new QFrame(home_pg);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(40, 110, 121, 411));
        frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"background-color: rgb(68, 68, 68);\n"
"border-style: offset;\n"
"border-radius: 20px;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        btn_category = new QPushButton(frame);
        btn_category->setObjectName(QString::fromUtf8("btn_category"));
        btn_category->setGeometry(QRect(20, 220, 80, 61));
        btn_category->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: offset;\n"
"border-radius: 20px;\n"
"\n"
"color: white;\n"
"font: bold;\n"
"font: 14px;\n"
"}"));
        btn_fav = new QPushButton(frame);
        btn_fav->setObjectName(QString::fromUtf8("btn_fav"));
        btn_fav->setGeometry(QRect(20, 130, 80, 61));
        btn_fav->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: offset;\n"
"border-radius: 20px;\n"
"\n"
"color: white;\n"
"font: bold;\n"
"font: 14px;\n"
"}"));
        btn_author = new QPushButton(frame);
        btn_author->setObjectName(QString::fromUtf8("btn_author"));
        btn_author->setGeometry(QRect(20, 40, 80, 61));
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        btn_author->setFont(font);
        btn_author->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: offset;\n"
"border-radius: 18px;\n"
"color: white;\n"
"font: bold;\n"
"font: 15px;\n"
"}"));
        btn_add = new QPushButton(frame);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        btn_add->setGeometry(QRect(40, 310, 41, 41));
        QFont font1;
        font1.setPointSize(50);
        btn_add->setFont(font1);
        btn_add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(139, 100, 73);\n"
"border-radius: 20px;\n"
"color:white;\n"
"}\n"
""));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 360, 71, 20));
        label = new QLabel(home_pg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 110, 91, 16));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setItalic(false);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color:  white;\n"
"}"));
        lineEdit = new QLineEdit(home_pg);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(160, 40, 461, 24));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgba(236, 236, 236, 51);\n"
"border-color: white;\n"
"border-radius:10px;\n"
"border-style:inset;\n"
"\n"
"}"));
        pushButton = new QPushButton(home_pg);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(600, 40, 61, 24));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(49, 49, 49);\n"
"border-radius: 10px;\n"
"border-color: white;\n"
"border-style:inset;\n"
"\n"
"}"));
        table_home = new QTableView(home_pg);
        table_home->setObjectName(QString::fromUtf8("table_home"));
        table_home->setGeometry(QRect(210, 170, 551, 311));
        home_btn = new QPushButton(home_pg);
        home_btn->setObjectName(QString::fromUtf8("home_btn"));
        home_btn->setGeometry(QRect(80, 30, 41, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Corsiva Hebrew"));
        font3.setItalic(true);
        home_btn->setFont(font3);
        home_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius:20px;\n"
"background-color:rgb(138, 94, 68);\n"
"}"));
        stackedWidget->addWidget(home_pg);
        author_pg = new QWidget();
        author_pg->setObjectName(QString::fromUtf8("author_pg"));
        label_author = new QLabel(author_pg);
        label_author->setObjectName(QString::fromUtf8("label_author"));
        label_author->setGeometry(QRect(210, 110, 91, 16));
        label_author->setFont(font2);
        label_author->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color:  white;\n"
"}"));
        listView = new QListView(author_pg);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(210, 160, 511, 311));
        frame_2 = new QFrame(author_pg);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(40, 110, 121, 411));
        frame_2->setStyleSheet(QString::fromUtf8("QFrame {\n"
"background-color: rgb(68, 68, 68);\n"
"border-style: offset;\n"
"border-radius: 20px;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        btn_category_2 = new QPushButton(frame_2);
        btn_category_2->setObjectName(QString::fromUtf8("btn_category_2"));
        btn_category_2->setGeometry(QRect(20, 220, 80, 61));
        btn_category_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: offset;\n"
"border-radius: 20px;\n"
"\n"
"color: white;\n"
"font: bold;\n"
"font: 14px;\n"
"}"));
        btn_fav_2 = new QPushButton(frame_2);
        btn_fav_2->setObjectName(QString::fromUtf8("btn_fav_2"));
        btn_fav_2->setGeometry(QRect(20, 130, 80, 61));
        btn_fav_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: offset;\n"
"border-radius: 20px;\n"
"\n"
"color: white;\n"
"font: bold;\n"
"font: 14px;\n"
"}"));
        btn_author_2 = new QPushButton(frame_2);
        btn_author_2->setObjectName(QString::fromUtf8("btn_author_2"));
        btn_author_2->setGeometry(QRect(20, 40, 80, 61));
        btn_author_2->setFont(font);
        btn_author_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: offset;\n"
"border-radius: 18px;\n"
"color: white;\n"
"font: bold;\n"
"font: 15px;\n"
"}"));
        btn_add_2 = new QPushButton(frame_2);
        btn_add_2->setObjectName(QString::fromUtf8("btn_add_2"));
        btn_add_2->setGeometry(QRect(40, 310, 41, 41));
        btn_add_2->setFont(font1);
        btn_add_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(139, 100, 73);\n"
"border-radius: 20px;\n"
"color:white;\n"
"}\n"
""));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 360, 71, 20));
        lineEdit_2 = new QLineEdit(author_pg);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 40, 461, 24));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgba(236, 236, 236, 51);\n"
"border-color: white;\n"
"border-radius:10px;\n"
"border-style:inset;\n"
"\n"
"}"));
        pushButton_2 = new QPushButton(author_pg);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(600, 40, 61, 24));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(49, 49, 49);\n"
"border-radius: 10px;\n"
"border-color: white;\n"
"border-style:inset;\n"
"\n"
"}"));
        home_btn_3 = new QPushButton(author_pg);
        home_btn_3->setObjectName(QString::fromUtf8("home_btn_3"));
        home_btn_3->setGeometry(QRect(80, 30, 41, 41));
        QFont font4;
        font4.setItalic(true);
        home_btn_3->setFont(font4);
        home_btn_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius:20px;\n"
"background-color:rgb(138, 94, 68);\n"
"}"));
        stackedWidget->addWidget(author_pg);
        fav_pg = new QWidget();
        fav_pg->setObjectName(QString::fromUtf8("fav_pg"));
        label_author_2 = new QLabel(fav_pg);
        label_author_2->setObjectName(QString::fromUtf8("label_author_2"));
        label_author_2->setGeometry(QRect(210, 110, 141, 16));
        label_author_2->setFont(font2);
        label_author_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color:  white;\n"
"}"));
        frame_3 = new QFrame(fav_pg);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(40, 110, 121, 411));
        frame_3->setStyleSheet(QString::fromUtf8("QFrame {\n"
"background-color: rgb(68, 68, 68);\n"
"border-style: offset;\n"
"border-radius: 20px;\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        btn_category_3 = new QPushButton(frame_3);
        btn_category_3->setObjectName(QString::fromUtf8("btn_category_3"));
        btn_category_3->setGeometry(QRect(20, 220, 80, 61));
        btn_category_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: offset;\n"
"border-radius: 20px;\n"
"\n"
"color: white;\n"
"font: bold;\n"
"font: 14px;\n"
"}"));
        btn_fav_3 = new QPushButton(frame_3);
        btn_fav_3->setObjectName(QString::fromUtf8("btn_fav_3"));
        btn_fav_3->setGeometry(QRect(20, 130, 80, 61));
        btn_fav_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: offset;\n"
"border-radius: 20px;\n"
"\n"
"color: white;\n"
"font: bold;\n"
"font: 14px;\n"
"}"));
        btn_author_3 = new QPushButton(frame_3);
        btn_author_3->setObjectName(QString::fromUtf8("btn_author_3"));
        btn_author_3->setGeometry(QRect(20, 40, 80, 61));
        btn_author_3->setFont(font);
        btn_author_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: offset;\n"
"border-radius: 18px;\n"
"color: white;\n"
"font: bold;\n"
"font: 15px;\n"
"}"));
        btn_add_3 = new QPushButton(frame_3);
        btn_add_3->setObjectName(QString::fromUtf8("btn_add_3"));
        btn_add_3->setGeometry(QRect(40, 310, 41, 41));
        btn_add_3->setFont(font1);
        btn_add_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(139, 100, 73);\n"
"border-radius: 20px;\n"
"color:white;\n"
"}\n"
""));
        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 360, 71, 20));
        tableView = new QTableView(fav_pg);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(220, 160, 481, 341));
        lineEdit_3 = new QLineEdit(fav_pg);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(160, 40, 461, 24));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgba(236, 236, 236, 51);\n"
"border-color: white;\n"
"border-radius:10px;\n"
"border-style:inset;\n"
"\n"
"}"));
        pushButton_3 = new QPushButton(fav_pg);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(600, 40, 61, 24));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(49, 49, 49);\n"
"border-radius: 10px;\n"
"border-color: white;\n"
"border-style:inset;\n"
"\n"
"}"));
        home_btn_2 = new QPushButton(fav_pg);
        home_btn_2->setObjectName(QString::fromUtf8("home_btn_2"));
        home_btn_2->setGeometry(QRect(80, 30, 41, 41));
        home_btn_2->setFont(font4);
        home_btn_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius:20px;\n"
"background-color:rgb(138, 94, 68);\n"
"}"));
        stackedWidget->addWidget(fav_pg);
        cgy_page = new QWidget();
        cgy_page->setObjectName(QString::fromUtf8("cgy_page"));
        label_cgy = new QLabel(cgy_page);
        label_cgy->setObjectName(QString::fromUtf8("label_cgy"));
        label_cgy->setGeometry(QRect(210, 110, 121, 16));
        label_cgy->setFont(font2);
        label_cgy->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color:  white;\n"
"}"));
        listView_2 = new QListView(cgy_page);
        listView_2->setObjectName(QString::fromUtf8("listView_2"));
        listView_2->setGeometry(QRect(210, 160, 481, 311));
        frame_4 = new QFrame(cgy_page);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(40, 110, 121, 411));
        frame_4->setStyleSheet(QString::fromUtf8("QFrame {\n"
"background-color: rgb(68, 68, 68);\n"
"border-style: offset;\n"
"border-radius: 20px;\n"
"}"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        btn_category_4 = new QPushButton(frame_4);
        btn_category_4->setObjectName(QString::fromUtf8("btn_category_4"));
        btn_category_4->setGeometry(QRect(20, 220, 80, 61));
        btn_category_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: offset;\n"
"border-radius: 20px;\n"
"\n"
"color: white;\n"
"font: bold;\n"
"font: 14px;\n"
"}"));
        btn_fav_4 = new QPushButton(frame_4);
        btn_fav_4->setObjectName(QString::fromUtf8("btn_fav_4"));
        btn_fav_4->setGeometry(QRect(20, 130, 80, 61));
        btn_fav_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: offset;\n"
"border-radius: 20px;\n"
"\n"
"color: white;\n"
"font: bold;\n"
"font: 14px;\n"
"}"));
        btn_author_4 = new QPushButton(frame_4);
        btn_author_4->setObjectName(QString::fromUtf8("btn_author_4"));
        btn_author_4->setGeometry(QRect(20, 40, 80, 61));
        btn_author_4->setFont(font);
        btn_author_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: offset;\n"
"border-radius: 18px;\n"
"color: white;\n"
"font: bold;\n"
"font: 15px;\n"
"}"));
        btn_add_4 = new QPushButton(frame_4);
        btn_add_4->setObjectName(QString::fromUtf8("btn_add_4"));
        btn_add_4->setGeometry(QRect(40, 310, 41, 41));
        btn_add_4->setFont(font1);
        btn_add_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(139, 100, 73);\n"
"border-radius: 20px;\n"
"color:white;\n"
"}\n"
""));
        label_5 = new QLabel(frame_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 360, 71, 20));
        lineEdit_4 = new QLineEdit(cgy_page);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(160, 40, 461, 24));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgba(236, 236, 236, 51);\n"
"border-color: white;\n"
"border-radius:10px;\n"
"border-style:inset;\n"
"\n"
"}"));
        pushButton_4 = new QPushButton(cgy_page);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(600, 40, 61, 24));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(49, 49, 49);\n"
"border-radius: 10px;\n"
"border-color: white;\n"
"border-style:inset;\n"
"\n"
"}"));
        home_btn_4 = new QPushButton(cgy_page);
        home_btn_4->setObjectName(QString::fromUtf8("home_btn_4"));
        home_btn_4->setGeometry(QRect(80, 30, 41, 41));
        home_btn_4->setFont(font4);
        home_btn_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius:20px;\n"
"background-color:rgb(138, 94, 68);\n"
"}"));
        stackedWidget->addWidget(cgy_page);
        list_page = new QWidget();
        list_page->setObjectName(QString::fromUtf8("list_page"));
        frame_5 = new QFrame(list_page);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(40, 110, 121, 411));
        frame_5->setStyleSheet(QString::fromUtf8("QFrame {\n"
"background-color: rgb(68, 68, 68);\n"
"border-style: offset;\n"
"border-radius: 20px;\n"
"}"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        btn_category_5 = new QPushButton(frame_5);
        btn_category_5->setObjectName(QString::fromUtf8("btn_category_5"));
        btn_category_5->setGeometry(QRect(20, 220, 80, 61));
        btn_category_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: offset;\n"
"border-radius: 20px;\n"
"\n"
"color: white;\n"
"font: bold;\n"
"font: 14px;\n"
"}"));
        btn_fav_5 = new QPushButton(frame_5);
        btn_fav_5->setObjectName(QString::fromUtf8("btn_fav_5"));
        btn_fav_5->setGeometry(QRect(20, 130, 80, 61));
        btn_fav_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: offset;\n"
"border-radius: 20px;\n"
"\n"
"color: white;\n"
"font: bold;\n"
"font: 14px;\n"
"}"));
        btn_author_5 = new QPushButton(frame_5);
        btn_author_5->setObjectName(QString::fromUtf8("btn_author_5"));
        btn_author_5->setGeometry(QRect(20, 40, 80, 61));
        btn_author_5->setFont(font);
        btn_author_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: offset;\n"
"border-radius: 18px;\n"
"color: white;\n"
"font: bold;\n"
"font: 15px;\n"
"}"));
        btn_add_5 = new QPushButton(frame_5);
        btn_add_5->setObjectName(QString::fromUtf8("btn_add_5"));
        btn_add_5->setGeometry(QRect(40, 310, 41, 41));
        btn_add_5->setFont(font1);
        btn_add_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(139, 100, 73);\n"
"border-radius: 20px;\n"
"color:white;\n"
"}\n"
""));
        label_6 = new QLabel(frame_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 360, 71, 20));
        label_cgy_2 = new QLabel(list_page);
        label_cgy_2->setObjectName(QString::fromUtf8("label_cgy_2"));
        label_cgy_2->setGeometry(QRect(210, 110, 121, 16));
        label_cgy_2->setFont(font2);
        label_cgy_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color:  white;\n"
"}"));
        lineEdit_5 = new QLineEdit(list_page);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(160, 40, 461, 24));
        lineEdit_5->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgba(236, 236, 236, 51);\n"
"border-color: white;\n"
"border-radius:10px;\n"
"border-style:inset;\n"
"\n"
"}"));
        pushButton_5 = new QPushButton(list_page);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(600, 40, 61, 24));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(49, 49, 49);\n"
"border-radius: 10px;\n"
"border-color: white;\n"
"border-style:inset;\n"
"\n"
"}"));
        home_btn_5 = new QPushButton(list_page);
        home_btn_5->setObjectName(QString::fromUtf8("home_btn_5"));
        home_btn_5->setGeometry(QRect(80, 30, 41, 41));
        home_btn_5->setFont(font4);
        home_btn_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius:20px;\n"
"background-color:rgb(138, 94, 68);\n"
"}"));
        tableView_2 = new QTableView(list_page);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(210, 170, 481, 341));
        stackedWidget->addWidget(list_page);
        read_page = new QWidget();
        read_page->setObjectName(QString::fromUtf8("read_page"));
        textBrowser_quote = new QTextBrowser(read_page);
        textBrowser_quote->setObjectName(QString::fromUtf8("textBrowser_quote"));
        textBrowser_quote->setGeometry(QRect(180, 190, 491, 181));
        textBrowser_quote->setStyleSheet(QString::fromUtf8("QTextBrowser {\n"
"background-color: none;\n"
"\n"
"border-style:offset;\n"
"\n"
"font: \n"
"	font: italic 18pt \"Gill Sans\";\n"
"}"));
        textBrowser_quote->setFrameShape(QFrame::Panel);
        textBrowser_quote->setFrameShadow(QFrame::Raised);
        textBrowser_author = new QTextBrowser(read_page);
        textBrowser_author->setObjectName(QString::fromUtf8("textBrowser_author"));
        textBrowser_author->setGeometry(QRect(520, 410, 151, 41));
        textBrowser_author->setFrameShape(QFrame::Panel);
        textBrowser_category = new QTextBrowser(read_page);
        textBrowser_category->setObjectName(QString::fromUtf8("textBrowser_category"));
        textBrowser_category->setGeometry(QRect(180, 410, 151, 41));
        textBrowser_category->setStyleSheet(QString::fromUtf8(""));
        textBrowser_category->setFrameShape(QFrame::Panel);
        btn_edit = new QPushButton(read_page);
        btn_edit->setObjectName(QString::fromUtf8("btn_edit"));
        btn_edit->setGeometry(QRect(620, 80, 111, 24));
        btn_edit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style:offset;\n"
"background-color:gray;\n"
"border-radius:10px;\n"
"}"));
        btn_edit_2 = new QPushButton(read_page);
        btn_edit_2->setObjectName(QString::fromUtf8("btn_edit_2"));
        btn_edit_2->setGeometry(QRect(620, 40, 111, 24));
        btn_edit_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style:offset;\n"
"background-color:gray;\n"
"border-radius:10px;\n"
"}"));
        btn_edit_3 = new QPushButton(read_page);
        btn_edit_3->setObjectName(QString::fromUtf8("btn_edit_3"));
        btn_edit_3->setGeometry(QRect(620, 120, 111, 24));
        btn_edit_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style:offset;\n"
"background-color:gray;\n"
"border-radius:10px;\n"
"}"));
        pushButton_6 = new QPushButton(read_page);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(70, 50, 80, 24));
        pushButton_6->setFont(font4);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: none;\n"
"border-style:offset;\n"
"}"));
        stackedWidget->addWidget(read_page);
        edit_page = new QWidget();
        edit_page->setObjectName(QString::fromUtf8("edit_page"));
        plainTextEdit = new QPlainTextEdit(edit_page);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(220, 150, 371, 101));
        plainTextEdit->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"border-radius: 20px;\n"
"border-color : white;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(72, 72, 72, 255), stop:1 rgba(90, 90, 90, 255));\n"
"color: white;\n"
"}"));
        label_7 = new QLabel(edit_page);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(370, 60, 101, 16));
        QFont font5;
        font5.setBold(true);
        label_7->setFont(font5);
        label_8 = new QLabel(edit_page);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(220, 120, 101, 16));
        label_9 = new QLabel(edit_page);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(220, 270, 101, 16));
        label_10 = new QLabel(edit_page);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(480, 270, 101, 16));
        le_author = new QLineEdit(edit_page);
        le_author->setObjectName(QString::fromUtf8("le_author"));
        le_author->setGeometry(QRect(220, 310, 113, 24));
        le_author->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(72, 72, 72, 255), stop:1 rgba(90, 90, 90, 255));\n"
"border-style: offset;\n"
"}"));
        le_author_2 = new QLineEdit(edit_page);
        le_author_2->setObjectName(QString::fromUtf8("le_author_2"));
        le_author_2->setGeometry(QRect(480, 310, 113, 24));
        le_author_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(72, 72, 72, 255), stop:1 rgba(90, 90, 90, 255));\n"
"border-style: offset;\n"
"}"));
        buttonBox = new QDialogButtonBox(edit_page);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(430, 420, 166, 24));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        stackedWidget->addWidget(edit_page);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAdd_to_Favorite->setText(QApplication::translate("MainWindow", "Add to Favorite", nullptr));
        actionEdit->setText(QApplication::translate("MainWindow", "Edit", nullptr));
        actionDelete->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        btn_category->setText(QApplication::translate("MainWindow", "Category", nullptr));
        btn_fav->setText(QApplication::translate("MainWindow", "Favorite", nullptr));
        btn_author->setText(QApplication::translate("MainWindow", "Author", nullptr));
        btn_add->setText(QApplication::translate("MainWindow", "+", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Add Quote", nullptr));
        label->setText(QApplication::translate("MainWindow", "Dashboard", nullptr));
        lineEdit->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Search", nullptr));
        home_btn->setText(QApplication::translate("MainWindow", "q.o", nullptr));
        label_author->setText(QApplication::translate("MainWindow", "Author List", nullptr));
        btn_category_2->setText(QApplication::translate("MainWindow", "Category", nullptr));
        btn_fav_2->setText(QApplication::translate("MainWindow", "Favorite", nullptr));
        btn_author_2->setText(QApplication::translate("MainWindow", "Author", nullptr));
        btn_add_2->setText(QApplication::translate("MainWindow", "+", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Add Quote", nullptr));
        lineEdit_2->setText(QString());
        pushButton_2->setText(QApplication::translate("MainWindow", "Search", nullptr));
        home_btn_3->setText(QApplication::translate("MainWindow", "q.o", nullptr));
        label_author_2->setText(QApplication::translate("MainWindow", "Favorite Quotes", nullptr));
        btn_category_3->setText(QApplication::translate("MainWindow", "Category", nullptr));
        btn_fav_3->setText(QApplication::translate("MainWindow", "Favorite", nullptr));
        btn_author_3->setText(QApplication::translate("MainWindow", "Author", nullptr));
        btn_add_3->setText(QApplication::translate("MainWindow", "+", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Add Quote", nullptr));
        lineEdit_3->setText(QString());
        pushButton_3->setText(QApplication::translate("MainWindow", "Search", nullptr));
        home_btn_2->setText(QApplication::translate("MainWindow", "q.o", nullptr));
        label_cgy->setText(QApplication::translate("MainWindow", "Category List", nullptr));
        btn_category_4->setText(QApplication::translate("MainWindow", "Category", nullptr));
        btn_fav_4->setText(QApplication::translate("MainWindow", "Favorite", nullptr));
        btn_author_4->setText(QApplication::translate("MainWindow", "Author", nullptr));
        btn_add_4->setText(QApplication::translate("MainWindow", "+", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Add Quote", nullptr));
        lineEdit_4->setText(QString());
        pushButton_4->setText(QApplication::translate("MainWindow", "Search", nullptr));
        home_btn_4->setText(QApplication::translate("MainWindow", "q.o", nullptr));
        btn_category_5->setText(QApplication::translate("MainWindow", "Category", nullptr));
        btn_fav_5->setText(QApplication::translate("MainWindow", "Favorite", nullptr));
        btn_author_5->setText(QApplication::translate("MainWindow", "Author", nullptr));
        btn_add_5->setText(QApplication::translate("MainWindow", "+", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Add Quote", nullptr));
        label_cgy_2->setText(QApplication::translate("MainWindow", "Quote List", nullptr));
        lineEdit_5->setText(QString());
        pushButton_5->setText(QApplication::translate("MainWindow", "Search", nullptr));
        home_btn_5->setText(QApplication::translate("MainWindow", "q.o", nullptr));
        textBrowser_quote->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Quote content</p></body></html>", nullptr));
        btn_edit->setText(QApplication::translate("MainWindow", "Edit", nullptr));
        btn_edit_2->setText(QApplication::translate("MainWindow", "Add to Favorite", nullptr));
        btn_edit_3->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "back", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Edit Quote", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Quote Content", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Author", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Category", nullptr));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
