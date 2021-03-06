#ifndef PRODAVNICA_HPP_INCLUDED
#define PRODAVNICA_HPP_INCLUDED

#include "Isporuka.hpp"
#include "SvaObuca.hpp"
#include "SvaOdeca.hpp"
#include "SavAksesoar.hpp"
#include "SvaMestaProdavnica.hpp"
#include "InformacijeOProdavnici.hpp"
#include "Kupac.hpp"
#include "Poslodavac.hpp"
#include "Korpa.hpp"
#include "CallCentar.hpp"

class Prodavnica
{
private:
    SvaOdeca S;
    SvaObuca O;
    SavAksesoar A;
    Korpa K;
    Kupac kupac;
    Isporuka i;
    informacijeOProdavnici info;
    SvaMestaProdavnica sva;
    Poslodavac p;
    CallCentar call;

public:
    void setSvaOdeca(SvaOdeca odecos)
    {
        S = odecos;
    }
    void setSvaObuca(SvaObuca obucos)
    {
        O = obucos;
    }
    void setSavAksesoar(SavAksesoar aksesoaros)
    {
        A = aksesoaros;
    }
    void setKorpa(Korpa korpica)
    {
        K = korpica;
    }
    void setKupac(Kupac kupacos)
    {
        kupac = kupacos;
    }
    void setIsporuka(Isporuka isporucacos)
    {
        i = isporucacos;
    }
    void setInfo(informacijeOProdavnici informacione)
    {
        info = informacione;
    }
    void setSvaMesta(SvaMestaProdavnica svacos)
    {
        sva = svacos;
    }
    void setPoslodavac(Poslodavac mucaco)
    {
        p = mucaco;
    }
    void setCall(CallCentar buenosdias)
    {
        call = buenosdias;
    }

    SvaOdeca getSvaOdeca()const
    {
        return S;
    }
    SvaObuca getSvaObuca()const
    {
        return O;
    }
    SavAksesoar getSavAksesoar()const
    {
        return A;
    }
    Korpa getKorpa()const
    {
        return K;
    }
    Kupac getKupac()const
    {
        return kupac;
    }
    Isporuka getIsporuka()const
    {
        return i;
    }
    informacijeOProdavnici getInfo()const
    {
        return info;
    }
    SvaMestaProdavnica getSvaMesta()const
    {
        return sva;
    }
    Poslodavac getPoslodavac()const
    {
        return p;
    }
    CallCentar getCall()const
    {
        return call;
    }

    void dodajUProdavnicuGornji(GornjiDelovi &g)
    {
        if(g.getOdeljenje()== "MUSKO" )
        {
            S.dodajGornjUMuski(g);
        }
        else if(g.getOdeljenje() == "ZENSKO")
        {
            S.dodajGornjiUZenski(g);
        }
        else if(g.getOdeljenje() == "DECIJE")
        {
            S.dodajGornjiUDeciji(g);
        }
    }
    void dodajUProdavnicuDonji(DonjiDelovi &d)
    {
        if(d.getOdeljenje()== "MUSKO" )
        {
            S.dodajDonjiUMuski(d);
        }
        else if(d.getOdeljenje() == "ZENSKO")
        {
            S.dodajDonjiUZenski(d);
        }
        else if(d.getOdeljenje() == "DECIJE")
        {
            S.dodajDonjiUDeciji(d);
        }
    }
    void dodajUProdavnicuObucu(Obucica &o)
    {
        if(o.getOdeljenje()== "MUSKO" )
        {
            O.dodajUMuski(o);
        }
        else if(o.getOdeljenje() == "ZENSKO")
        {
            O.dodajUZenski(o);
        }
        else if(o.getOdeljenje() == "DECIJE")
        {
            O.dodajUDeciji(o);
        }
    }
    void dodajUProdavnicuAksesoar(Aksesoaric &a)
    {
        if(a.getOdeljenje()== "MUSKO" )
        {
            A.dodajUMuski(a);
        }
        else if(a.getOdeljenje() == "ZENSKO")
        {
            A.dodajUZenski(a);
        }
        else if(a.getOdeljenje() == "DECIJE")
        {
            A.dodajUDeciji(a);
        }
    }

    void ispisProizvodaProdavnice()
    {
        S.ispisiSvuOdecu();
        O.ispisiSvuObucu();
        A.ispisiSavAksesoar();
    }
    void dodajGUKorpu( GornjiDelovi &g)
    {
        K+=g;
    }
    void dodajDUKorpu( DonjiDelovi &d)
    {
        K+=d;
    }
    void dodajOUKorpu( Obucica &o)
    {
        K+=o;
    }
    void dodajAUKorpu( Aksesoaric &a)
    {
        K+=a;
    }

    double getUkupnaCena()const
    {
        return K.getUkupanRacun();
    }

    void ispisCeleKorpe()
    {
        K.ispisKorpe();
    }

    void KupovinaProizvodaIzKorpe(Kupac &kup, Isporuka &isp)
    {
        kup.KupiProzivod(getUkupnaCena());
        isp.ispisIsporuke();
        cout<<"Ukupna cena paketa (SA POSTARINOM): "<<getUkupnaCena()+i.getCena()<<endl;

    }
    void ispisInformacijaOProdavnici()
    {
        info.ispisInformacija(getSvaMesta(),getPoslodavac(),getCall());
    }
};

#endif // PRODAVNICA_HPP_INCLUDED
