/********************************************************************************
** Form generated from reading UI file 'add.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_H
#define UI_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Add
{
public:
    QDialogButtonBox *buttonBox;
    QPlainTextEdit *plainTextEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *le_author;
    QLineEdit *le_cgy;

    void setupUi(QDialog *Add)
    {
        if (Add->objectName().isEmpty())
            Add->setObjectName(QString::fromUtf8("Add"));
        Add->resize(546, 394);
        Add->setStyleSheet(QString::fromUtf8("QDialog {\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0.903409, stop:0 rgba(18, 22, 29, 255), stop:1 rgba(55, 59, 72, 255));\n"
"}"));
        buttonBox = new QDialogButtonBox(Add);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(160, 340, 341, 32));
        buttonBox->setStyleSheet(QString::fromUtf8(""));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        plainTextEdit = new QPlainTextEdit(Add);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(90, 50, 371, 101));
        plainTextEdit->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"border-radius: 20px;\n"
"border-color : white;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(72, 72, 72, 255), stop:1 rgba(90, 90, 90, 255));\n"
"color: white;\n"
"}"));
        label = new QLabel(Add);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 20, 91, 16));
        QFont font;
        label->setFont(font);
        label_2 = new QLabel(Add);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 180, 91, 16));
        label_2->setFont(font);
        label_3 = new QLabel(Add);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(350, 180, 91, 16));
        label_3->setFont(font);
        le_author = new QLineEdit(Add);
        le_author->setObjectName(QString::fromUtf8("le_author"));
        le_author->setGeometry(QRect(100, 220, 113, 24));
        le_author->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(72, 72, 72, 255), stop:1 rgba(90, 90, 90, 255));\n"
"border-style: offset;\n"
"}"));
        le_cgy = new QLineEdit(Add);
        le_cgy->setObjectName(QString::fromUtf8("le_cgy"));
        le_cgy->setGeometry(QRect(350, 220, 113, 24));
        le_cgy->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(72, 72, 72, 255), stop:1 rgba(90, 90, 90, 255));\n"
"border-style: offset;\n"
"}"));

        retranslateUi(Add);
        QObject::connect(buttonBox, SIGNAL(accepted()), Add, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Add, SLOT(reject()));

        QMetaObject::connectSlotsByName(Add);
    } // setupUi

    void retranslateUi(QDialog *Add)
    {
        Add->setWindowTitle(QApplication::translate("Add", "Dialog", nullptr));
        label->setText(QApplication::translate("Add", "New Quote", nullptr));
        label_2->setText(QApplication::translate("Add", "Author", nullptr));
        label_3->setText(QApplication::translate("Add", "Category", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add: public Ui_Add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_H
