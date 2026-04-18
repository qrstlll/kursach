#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

ClubManager<Person> myClub;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    loadFromFile();
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_btnAdd_clicked() {
    QString name = ui->lineEdit->text();
    QString pos = ui->comboBox->currentText();
    int goals = ui->spinBoxGoals->value();   // Поле для голів
    int stamina = ui->spinBoxStamina->value(); // Поле для витривалості

    if (name.isEmpty()) return;

    Player* p = new Player(name, stamina, pos, goals);
    myClub.add(p);
    ui->listWidget->addItem(p->getInfo());
}

void MainWindow::on_btnSortGoals_clicked() {
    std::sort(myClub.getAll().begin(), myClub.getAll().end(), [](Person* a, Person* b) {
        return static_cast<Player*>(a)->getGoals() > static_cast<Player*>(b)->getGoals();
    });
    ui->listWidget->clear();
    for(int i = 0; i < myClub.size(); ++i) ui->listWidget->addItem(myClub[i]->getInfo());
}

void MainWindow::on_btnSortStamina_clicked() {
    std::sort(myClub.getAll().begin(), myClub.getAll().end(), [](Person* a, Person* b) {
        return static_cast<Player*>(a)->getStamina() > static_cast<Player*>(b)->getStamina();
    });
    ui->listWidget->clear();
    for(int i = 0; i < myClub.size(); ++i) ui->listWidget->addItem(myClub[i]->getInfo());
}

void MainWindow::on_btnSave_clicked() {
    QFile file("squad.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        for (int i = 0; i < myClub.size(); ++i) out << myClub[i]->getInfo() << "\n";
        file.close();
        QMessageBox::information(this, "Save", "Data saved!");
    }
}
void MainWindow::on_btnClearAll_clicked() {
    // 1. Питаємо підтвердження у користувача (щоб не видалити випадково)
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Підтвердження", "Ви впевнені, що хочете видалити ВСІХ футболістів?",
                                  QMessageBox::Yes|QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        // 2. Очищаємо список на екрані
        ui->listWidget->clear();

        // 3. Очищаємо файл (відкриваємо в режимі Truncate, що затирає вміст)
        QFile file("squad.txt");
        if (file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate)) {
            file.close();
        }

        // 4. Очищаємо дані в пам'яті (вектор у ClubManager)
        // Оскільки у нас там динамічна пам'ять, важливо правильно видалити об'єкти
        auto& members = myClub.getAll();
        for(auto m : members) {
            delete m;
        }
        members.clear();

        QMessageBox::information(this, "Успіх", "База даних повністю очищена!");
    }
}

void MainWindow::loadFromFile() {
    QFile file("squad.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine();
            if (line.isEmpty()) continue;

            // Розбиваємо рядок за роздільником "|"
            QStringList parts = line.split(" | ");
            if (parts.size() >= 2) {
                QString name = parts.at(0);
                QString pos = parts.at(1);

                // Витягуємо цифри голів та витривалості
                // Наприклад, з рядка "Goals: 10" беремо "10"
                int goals = 0;
                int stamina = 80;

                if (parts.size() >= 4) {
                    QString goalsStr = parts.at(2); // "Goals: 10"
                    goals = goalsStr.section(' ', 1).toInt();

                    QString staminaStr = parts.at(3); // "Stamina: 85%"
                    stamina = staminaStr.section(' ', 1).replace("%", "").toInt();
                }

                // КРИТИЧНО: Створюємо об'єкт у пам'яті!
                Player* p = new Player(name, stamina, pos, goals);
                myClub.add(p);

                // Додаємо у візуальний список
                ui->listWidget->addItem(p->getInfo());
            }
        }
        file.close();
    }
}
