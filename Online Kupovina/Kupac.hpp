#ifndef KUPAC_HPP_INCLUDED
#define KUPAC_HPP_INCLUDED

#include "Osoba.hpp"

class Kupac : public Osoba
{
private:
    Kartica k;
public:
    Kupac():k() {}
    Kupac(DinString nk, DinString p, double i):k(nk,p,i) {}
    Kupac(const Kupac &kk):k(kk.k) {}

    void setKartica(Kartica kart){k = kart;}
    Kartica getKartica()const{return k;}

    void ispisKupca()
    {
        cout<<"Informacije o kupcu: "<<endl;
        Osoba::ispis();
        k.ispisKartice();
    }
    void KupiProzivod(double cenaProizvoda)
    {
        k.skiniNovacSaKartice(cenaProizvoda);
    }
};

#endif // KUPAC_HPP_INCLUDED
