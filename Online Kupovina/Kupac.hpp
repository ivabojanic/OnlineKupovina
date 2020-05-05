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

    void ispisKupca()
    {
        cout<<"Informacije o kupcu: "<<endl;
        Osoba::ispis();
        k.ispisKartice();
        cout<<endl;
    }
    void KupiProzivod(double cenaProizvoda)
    {
        k.skiniNovacSaKartice(cenaProizvoda);
    }
};

#endif // KUPAC_HPP_INCLUDED
