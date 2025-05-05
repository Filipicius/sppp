#ifndef OSOBA_H
#define OSOBA_H

#include <QString>

class Osoba {
public:
    Osoba();
    Osoba(QString);

    QString get_meno();
    void set_meno(QString);

protected:
    QString meno;
};

inline QString Osoba::get_meno() { return this->meno; }

inline void Osoba::set_meno(QString meno) { this->meno = meno; }

#endif // OSOBA_H
