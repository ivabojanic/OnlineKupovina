#ifndef POSLODAVAC_HPP_INCLUDED
#define POSLODAVAC_HPP_INCLUDED

#include "Osoba.hpp"

class Poslodavac : public Osoba
{
private:
    DinString nazivRadnje;
public:
    Poslodavac(){nazivRadnje = "Sinsay";}
    Poslodavac(DinString n){nazivRadnje = n;}
    Poslodavac(const Poslodavac &p){nazivRadnje = p.nazivRadnje;}

    void setNazivRadnje(DinString n){nazivRadnje = n;}
    DinString getNazivRadnje()const{return nazivRadnje;}

    void ispisRadnje()
    {
        cout<<"Naziv radnje poslodavca: ";
        cout<<getNazivRadnje()<<endl;
    }

     friend ostream& operator<<(ostream& izlaz,  Poslodavac &p)
    {
        izlaz<<"Informacije o poslodavcu: "<<endl;
        p.ispisRadnje();
        p.ispis();
        izlaz<<endl;
        return izlaz;
    }

};

#endif // POSLODAVAC_HPP_INCLUDED
