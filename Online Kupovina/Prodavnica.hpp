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
    deo d;
    POL pol;
    vrsta vrs;
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

    void setDeo(deo dd){d = dd;}
    void setPol(POL pp){pol = pp;}
    void setVrsta(vrsta v){vrs = v;}

    string getDeo()const
    {
        switch(d)
        {
        case ODECA:
            return "ODECA";
            break;
        case OBUCA:
            return "OBUCA";
            break;
        case AKSESOAR:
            return "AKSESOAR";
            break;
        default:
            return "Nema te oblasti";
            break;
        }
    }
    string getPol()const
    {
        switch(pol)
        {
        case MUSKI:
            return "MUSKI";
            break;
        case ZENSKI:
            return "ZENSKI";
            break;
        case DECIJI:
            return "DECIJI";
            break;
        default:
            return "Nema pola";
            break;
        }
    }
    string getVrsta()const
    {
        switch(vrs)
        {
        case GORNJI:
            return "GORNJI";
            break;
        case DONJI:
            return "DONJI";
            break;
        case NEMA:
            return "NEMA";
            break;
        default:
            return "Nista";
            break;
        }
    }
    Prodavnica(){d = ODECA; pol = MUSKI; vrs = GORNJI;}
    Prodavnica(deo dd,POL p,vrsta v){d = dd; pol = p; vrs = v;}
    Prodavnica(const Prodavnica &pro){d = pro.d; pol = pro.pol; vrs = pro.vrs;}

    SvaMestaProdavnica getSvaMesta()const{return sva;}
    Poslodavac getPoslodavac()const{return p;}
    CallCentar getCall()const{return call;}

    void dodajUProdavnicuGornji(GornjiDelovi &g)
    {
        if(g.getOdeljenje()== "MUSKO" )
        {
            S.dodajGornjUMuski(g);
        }else if(g.getOdeljenje() == "ZENSKO")
        {
            S.dodajGornjiUZenski(g);
        }else if(g.getOdeljenje() == "DECIJE")
        {
            S.dodajGornjiUDeciji(g);
        }
    }
    void dodajUProdavnicuDonji(DonjiDelovi &d)
    {
        if(d.getOdeljenje()== "MUSKO" )
        {
            S.dodajDonjiUMuski(d);
        }else if(d.getOdeljenje() == "ZENSKO")
        {
            S.dodajDonjiUZenski(d);
        }else if(d.getOdeljenje() == "DECIJE")
        {
            S.dodajDonjiUDeciji(d);
        }
    }
    void dodajUProdavnicuObucu(Obucica &o)
    {
        if(o.getOdeljenje()== "MUSKO" )
        {
            O.dodajUMuski(o);
        }else if(o.getOdeljenje() == "ZENSKO")
        {
            O.dodajUZenski(o);
        }else if(o.getOdeljenje() == "DECIJE")
        {
            O.dodajUDeciji(o);
        }
    }
    void dodajUProdavnicuAksesoar(Aksesoaric &a)
    {
        if(a.getOdeljenje()== "MUSKO" )
        {
            A.dodajUMuski(a);
        }else if(a.getOdeljenje() == "ZENSKO")
        {
            A.dodajUZenski(a);
        }else if(a.getOdeljenje() == "DECIJE")
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

    void ispisCeleKorpe(){K.ispisKorpe();}

    void KupovinaProizvodaIzKorpe(Kupac &kup, Isporuka &isp)
    {
        kup.KupiProzivod(getUkupnaCena());
        isp.ispisIsporuke();
        cout<<"Ukupna cena paketa: "<<getUkupnaCena()+i.getCena()<<endl;
    }
    void ispisInformacijaOProdavnici(){info.ispisInformacija(getSvaMesta(),getPoslodavac(),getCall());}
};

#endif // PRODAVNICA_HPP_INCLUDED
