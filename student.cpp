#include "student.h"

Student::Student() : skupina(""), rocnik(0) { meno = ""; }

Student::Student(QString meno, QString skupina, int rocnik) {
    this->meno = meno;
    this->skupina = skupina;
    this->rocnik = rocnik;
}

QString Student::get_info() {
    return "Meno: " + this->meno + " Skupina: " + this->skupina +
           " Rocnik: " + QString::number(this->rocnik);
}
