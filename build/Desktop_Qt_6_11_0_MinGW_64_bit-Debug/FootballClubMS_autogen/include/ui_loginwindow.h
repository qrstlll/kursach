/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *editLogin;
    QPushButton *btnLogin;
    QLineEdit *editPassword;
    QPushButton *btnRegister;

    void setupUi(QDialog *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(400, 300);
        widget = new QWidget(LoginWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 0, 351, 241));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 2);

        editLogin = new QLineEdit(widget);
        editLogin->setObjectName("editLogin");

        gridLayout->addWidget(editLogin, 1, 0, 1, 1);

        btnLogin = new QPushButton(widget);
        btnLogin->setObjectName("btnLogin");

        gridLayout->addWidget(btnLogin, 1, 1, 1, 1);

        editPassword = new QLineEdit(widget);
        editPassword->setObjectName("editPassword");
        editPassword->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout->addWidget(editPassword, 3, 0, 1, 1);

        btnRegister = new QPushButton(widget);
        btnRegister->setObjectName("btnRegister");

        gridLayout->addWidget(btnRegister, 3, 1, 1, 1);


        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QDialog *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("LoginWindow", "                      \320\222\321\226\320\272\320\275\320\276 \321\200\320\265\321\224\321\201\321\202\321\200\320\260\321\206\321\226\321\227/\320\273\320\276\320\263\321\226\320\275\321\203", nullptr));
        editLogin->setPlaceholderText(QCoreApplication::translate("LoginWindow", "\320\233\320\276\320\263\321\226\320\275", nullptr));
        btnLogin->setText(QCoreApplication::translate("LoginWindow", "\320\227\320\260\320\273\320\276\320\263\321\226\320\275\320\270\321\202\320\270\321\201\321\214", nullptr));
        editPassword->setPlaceholderText(QCoreApplication::translate("LoginWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        btnRegister->setText(QCoreApplication::translate("LoginWindow", "\320\227\320\260\321\200\320\265\321\224\321\201\321\202\321\200\321\203\320\262\320\260\321\202\320\270\321\201\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
