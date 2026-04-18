/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QComboBox *comboBox;
    QPushButton *btnSave;
    QPushButton *btnAdd;
    QSpinBox *spinBoxStamina;
    QPushButton *btnSortGoals;
    QLineEdit *lineEdit;
    QSpinBox *spinBoxGoals;
    QPushButton *btnSortStamina;
    QPushButton *btnClearAll;
    QMenuBar *menubar;
    QMenu *menuFootballClubMS;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 30, 741, 291));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(widget);
        listWidget->setObjectName("listWidget");

        gridLayout->addWidget(listWidget, 0, 2, 6, 1);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        gridLayout->addWidget(comboBox, 1, 0, 1, 1);

        btnSave = new QPushButton(widget);
        btnSave->setObjectName("btnSave");

        gridLayout->addWidget(btnSave, 1, 1, 1, 1);

        btnAdd = new QPushButton(widget);
        btnAdd->setObjectName("btnAdd");

        gridLayout->addWidget(btnAdd, 0, 1, 1, 1);

        spinBoxStamina = new QSpinBox(widget);
        spinBoxStamina->setObjectName("spinBoxStamina");
        spinBoxStamina->setWrapping(true);
        spinBoxStamina->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(spinBoxStamina, 2, 0, 1, 1);

        btnSortGoals = new QPushButton(widget);
        btnSortGoals->setObjectName("btnSortGoals");

        gridLayout->addWidget(btnSortGoals, 4, 0, 1, 1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        spinBoxGoals = new QSpinBox(widget);
        spinBoxGoals->setObjectName("spinBoxGoals");
        spinBoxGoals->setWrapping(true);
        spinBoxGoals->setAlignment(Qt::AlignmentFlag::AlignCenter);
        spinBoxGoals->setValue(0);

        gridLayout->addWidget(spinBoxGoals, 3, 0, 1, 1);

        btnSortStamina = new QPushButton(widget);
        btnSortStamina->setObjectName("btnSortStamina");

        gridLayout->addWidget(btnSortStamina, 5, 0, 1, 1);

        btnClearAll = new QPushButton(widget);
        btnClearAll->setObjectName("btnClearAll");

        gridLayout->addWidget(btnClearAll, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuFootballClubMS = new QMenu(menubar);
        menuFootballClubMS->setObjectName("menuFootballClubMS");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFootballClubMS->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Forward", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Midfielder", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Defender", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Goalkeeper", nullptr));

        comboBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\267\320\270\321\206\321\226\321\217 \320\263\321\200\320\260\320\262\321\206\321\217", nullptr));
        btnSave->setText(QCoreApplication::translate("MainWindow", "\320\227\320\261\320\265\321\200\320\265\320\263\321\202\320\270 \320\264\320\260\320\275\321\226", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\264\320\260\320\275\321\226", nullptr));
        spinBoxStamina->setSpecialValueText(QCoreApplication::translate("MainWindow", "\320\222\320\270\321\202\321\200\320\270\320\262\320\260\320\273\321\226\321\201\321\202\321\214 \321\201\320\277\320\276\321\200\321\202\321\201\320\274\320\265\320\275\320\260", nullptr));
        btnSortGoals->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\321\203\320\262\320\260\320\275\320\275\321\217 \320\267\320\260 \320\263\320\276\320\273\320\260\320\274\320\270 ", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\206\320\274\321\217 \321\202\320\260 \320\237\321\200\321\226\320\267\320\262\320\270\321\211\320\265 \320\263\321\200\320\260\320\262\321\206\321\217", nullptr));
        spinBoxGoals->setSpecialValueText(QCoreApplication::translate("MainWindow", "\320\223\320\276\320\273\320\270", nullptr));
        btnSortStamina->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\321\203\320\262\320\260\320\275\320\275\321\217 \320\267\320\260 \320\262\320\270\321\202\321\200\320\270\320\262\320\260\320\273\321\226\321\201\321\202\321\216 ", nullptr));
        btnClearAll->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\320\270 \320\261\320\260\320\267\321\203 \320\264\320\260\320\275\320\270\321\205", nullptr));
        menuFootballClubMS->setTitle(QCoreApplication::translate("MainWindow", "FootballClubMS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
