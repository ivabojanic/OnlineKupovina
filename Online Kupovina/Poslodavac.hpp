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

    void ispisPoslodavca()
    {
        ispisRadnje();
        Osoba::ispis();
    }
};

#endif // POSLODAVAC_HPP_INCLUDED
