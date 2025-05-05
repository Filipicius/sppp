#include "ucitel.h"

Ucitel::Ucitel() : predmet("") {
    meno = "";
    this->studenti = new std::vector<Student *>();
}

Ucitel::Ucitel(QString meno, QString predmet) {
    this->meno = meno;
    this->predmet = predmet;
}

Ucitel::~Ucitel() { delete studenti; }

QString Ucitel::info_studenta(Student *s) { return s->get_info(); }

void Ucitel::prirad_studenta(Student *s) { this->studenti->push_back(s); }

Student *Ucitel::get_student(QString meno) {
    for (Student *s : *this->studenti) {
        if (s->get_meno() == meno) {
            return s;
        }
    }
    return NULL;
}

bool Ucitel::remove_student(QString meno) {
    for (auto it = studenti->begin(); it != studenti->end(); it++) {
        if ((*it)->get_meno() == meno) {
            this->studenti->erase(it);
            return true;
        }
    }
    return false;
}
