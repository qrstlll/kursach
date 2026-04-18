#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

LoginWindow::LoginWindow(QWidget *parent) : QDialog(parent), ui(new Ui::LoginWindow) {
    ui->setupUi(this);
}

LoginWindow::~LoginWindow() { delete ui; }

void LoginWindow::on_btnRegister_clicked() {
    QString login = ui->editLogin->text();
    QString pass = ui->editPassword->text();
    if (login.isEmpty() || pass.isEmpty()) return;

    QFile file("users.txt");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << login << ":" << pass << "\n";
        file.close();
        QMessageBox::information(this, "Success", "Registered!");
    }
}

void LoginWindow::on_btnLogin_clicked() {
    QFile file("users.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        QString login = ui->editLogin->text();
        QString pass = ui->editPassword->text();
        while (!in.atEnd()) {
            if (in.readLine() == login + ":" + pass) { accept(); return; }
        }
        QMessageBox::warning(this, "Error", "Wrong login/pass!");
    }
}