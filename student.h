#ifndef STUDENT_H
#define STUDENT_H

#include "osoba.h"

class Student : public Osoba {
public:
    Student();
    Student(QString, QString, int);

    QString get_skupina();
    int get_rocnik();
    void set_skupina(QString);
    void set_rocnik(int);
    QString get_info();

private:
    QString skupina;
    int rocnik;
};

inline QString Student::get_skupina() { return this->skupina; }

inline int Student::get_rocnik() { return this->rocnik; }

inline void Student::set_skupina(QString skupina) { this->skupina = skupina; }

inline void Student::set_rocnik(int rok) { rocnik = rok; }

#endif // STUDENT_H
