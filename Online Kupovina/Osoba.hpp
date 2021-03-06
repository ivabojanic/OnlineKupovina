#ifndef OSOBA_HPP_INCLUDED
#define OSOBA_HPP_INCLUDED

#include "Mesto.hpp"

class Osoba
{
private:
    DinString Ime;
    DinString Prezime;
    DinString email;
    DinString brojTelefona;
    Mesto mesto;
public:
    Osoba() : mesto()
    {
        Ime = "Iva";
        Prezime = "Bojanic";
        email = "blabla@gmail.com";
        brojTelefona = "066 924 96 86";
    }
    Osoba(DinString i, DinString p, DinString e, DinString t, DinString n,int br, DinString g): mesto(n,br,g)
    {
        Ime = i;
        Prezime = p;
        email = e;
        brojTelefona = t;
    }
    Osoba(const Osoba &o): mesto(o.mesto)
    {
        Ime = o.Ime;
        Prezime = o.Prezime;
        email = o.email;
        brojTelefona = o.brojTelefona;
    }

    void setIme(DinString im)
    {
        Ime = im;
    }
    void setPrezime(DinString prez)
    {
        Prezime = prez;
    }
    void setEmail(DinString em)
    {
        email = em;
    }
    void setBrojTelefona(DinString br)
    {
        brojTelefona = br;
    }
    void setMesto(Mesto mestic)
    {
        mesto = mestic;
    }

    DinString getIme()const
    {
        return Ime;
    }
    DinString getPrezime()const
    {
        return Prezime;
    }
    DinString getEmail()const
    {
        return email;
    }
    DinString getBrojTelefona()const
    {
        return brojTelefona;
    }
    Mesto getMesto()const
    {
        return mesto;
    }

    void ispis()
    {
        cout<<getIme()<<","<<getPrezime()<<endl;
        cout<<getEmail()<<endl;
        cout<<"+381"<<getBrojTelefona()<<endl;
        mesto.ispisMesta();
        cout<<endl;
    }
};

#endif // OSOBA_HPP_INCLUDED
