#ifndef UCITEL_H
#define UCITEL_H

#include "osoba.h"
#include "student.h"
#include <vector>

class Ucitel : public Osoba {
public:
    Ucitel();
    Ucitel(QString, QString);
    ~Ucitel();

    void set_meno(QString);
    QString get_meno();
    void set_predmet(QString);
    QString get_predmet();

    QString info_studenta(Student *);
    void prirad_studenta(Student *);
    Student *get_student(QString);
    bool remove_student(QString);

private:
    QString predmet;
    std::vector<Student *> *studenti;
};

inline void Ucitel::set_meno(QString meno) { this->meno = meno; }

inline QString Ucitel::get_meno() { return this->meno; }

inline void Ucitel::set_predmet(QString predm) { this->predmet = predm; }

inline QString Ucitel::get_predmet() { return this->predmet; }

#endif // UCITEL_H
