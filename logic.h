#ifndef LOGIC_H
#define LOGIC_H

#include <QString>
#include <vector>
#include <algorithm>

// 1. Базові класи
class Person {
protected:
    QString name;
public:
    Person(QString n) : name(n) {}
    virtual ~Person() {}
    virtual QString getInfo() const = 0;
    QString getName() const { return name; }
};

class Athlete {
protected:
    int stamina;
public:
    Athlete(int s) : stamina(s) {}
    int getStamina() const { return stamina; }
};

// 2. Множинне спадкування
class Player : public Person, public Athlete {
private:
    QString position;
    int goals;
public:
    Player(QString n, int s, QString p, int g)
        : Person(n), Athlete(s), position(p), goals(g) {}

    QString getInfo() const override {
        return QString("%1 | %2 | Goals: %3 | Stamina: %4%")
        .arg(name).arg(position).arg(goals).arg(stamina);
    }

    int getGoals() const { return goals; }
};

// 3. Шаблонний клас (Керування клубом)
template <typename T>
class ClubManager {
private:
    std::vector<T*> members;
public:
    void add(T* item) { members.push_back(item); }
    int size() const { return members.size(); }
    T* operator[](int i) { return members[i]; }

    // Доступ до вектора для алгоритмів сортування
    std::vector<T*>& getAll() { return members; }

    ~ClubManager() { for(auto m : members) delete m; }
};

#endif