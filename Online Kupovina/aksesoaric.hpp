#ifndef AKSESOARIC_HPP_INCLUDED
#define AKSESOARIC_HPP_INCLUDED

#include "proizvod.hpp"

enum aks {NAOCARE,KACKET,TORBA,SESIR,NESESER,SAL,KAPA,RUKAVICE,RANAC,};
class Aksesoaric : public Proizvod
{
protected:
    POL odeljenje;
    SEZONA period;
    aks naziv;
    double sirina;
    double duzina;
    double visina;
public:
    void setOdeljenje(POL p){odeljenje = p;}
    void setPeriod(SEZONA s){period = s;}
    void setNaziv(aks n){naziv = n;}
    void setSirina(double s)
    {
        if(s > 0)
        {
            sirina = s;
        }
    }
    void setDuzina(double d)
    {
        if(d > 0)
        {
            duzina = d;
        }
    }
    void setVisina(double v)
    {
        if(v > 0)
        {
            visina = v;
        }
    }

    string getPeriod()const
    {
        switch(period)
        {
        case LETO:
            return "LETNJI AKSESOAR";
            break;
        case ZIMA:
            return "ZIMSKI AKSESOAR";
        default:
            return "Nema sezone";
            break;
        }
    }
    string getMaterijal()const
    {
        if(period == LETO)
        {
            switch(materijal)
            {
            case GUMA:
                return "GUMA";
                break;
            case PLASTIKA:
                return "PLASTIKA";
                break;
            case PLATNO:
                return "PLATNO";
                break;
            case KOZA:
                return "KOZA";
                break;
            default:
                return "Nema materijala";
                break;
            }
        }
        else if (period == ZIMA)
        {
            switch(materijal)
            {
            case VUNA:
                return "GUMA";
                break;
            case GUMA:
                return "PLASTIKA";
                break;
            case PLATNO:
                return "PLATNO";
                break;
            case KOZA:
                return "KOZA";
                break;
            default:
                return "Nema materijala";
                break;
            }
        }
        else
            return "Nema perioda";
    }
    string getOdeljenje()const
    {
        switch(odeljenje)
        {
        case MUSKI:
            return "MUSKO";
            break;
        case ZENSKI:
            return "ZENSKO";
            break;
        case DECIJI:
            return "DECIJE";
            break;
        default:
            return "Nema odeljenja";
            break;
        }
    }
    string getNaziv()const
    {
        if(period == LETO)
        {
            switch(naziv)
            {
            case NAOCARE:
                return "NAOCARE";
                break;
            case KACKET:
                return "KACKET";
                break;
            case TORBA:
                return "TORBA";
                break;
            case SESIR:
                return "SESIR";
                break;
            case NESESER:
                return "NESESER";
                break;
            case RANAC:
                return "RANAC";
                break;
            default:
                return "Nema proizvoda";
                break;
            }
        }
        else if(period == ZIMA)
        {
            switch(naziv)
            {
            case SAL:
                return "SAL";
                break;
            case KAPA:
                return "ZIMSKA KAPA";
                break;
            case RUKAVICE:
                return "RUKAVICE";
                break;
            case RANAC:
                return "RANAC";
                break;
            case TORBA:
                return "TORBA";
                break;
            case NESESER:
                return "NESESER";
                break;
            default:
                return "Nema proizvoda";
                break;
            }
        }
        else
            return "Nema perioda";
    }
    double getDuzinu()const
    {
        return duzina;
    }
    double getSirina()const
    {
        return sirina;
    }
    double getVisina()const
    {
        return visina;
    }

    Aksesoaric()
    {
        odeljenje = ZENSKI;
        period = LETO;
        naziv = NAOCARE;
        sirina = 15.00;
        duzina = 15.00;
        visina = 5.00;
        opis = "Naocare za sunce sa crnim staklima";
        cena = 2800.00;
        boja = ZELENA;
        model = NOVI;
        materijal = PLASTIKA;
        proizvodjac = "Gucci";
        zemljaPorekla = SRBIJA;
        ID = "8960123775";
        naLageru = false;
    }
    Aksesoaric(POL l,SEZONA e,aks a,double sir,double duz,double vis,DinString o,double c,BOJA b,MODEL m,MATERIJAL mat,DinString p,ZEMLJA z,DinString i,bool lag)
    {
        odeljenje = l;
        period = e;
        naziv = a;
        sirina = sir;
        duzina = duz;
        visina = vis;
        opis = o;
        cena = c;
        boja = b;
        model = m;
        materijal = mat;
        proizvodjac = p;
        zemljaPorekla = z;
        ID = i;
        naLageru = lag;
    }
    Aksesoaric(const Aksesoaric &l)
    {
        odeljenje = l.odeljenje;
        period = l.period;
        naziv = l.naziv;
        sirina = l.sirina;
        duzina = l.duzina;
        visina = l.visina;
        opis = l.opis;
        cena = l.cena;
        boja = l.boja;
        model = l.model;
        materijal = l.materijal;
        proizvodjac = l.proizvodjac;
        zemljaPorekla = l.zemljaPorekla;
        ID = l.ID;
        naLageru = l.naLageru;
    }
    friend ostream& operator<<(ostream& izlaz,  Aksesoaric &a)
    {
        izlaz<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| PROIZVOD |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        izlaz<<"Naziv proizvoda: ";
        izlaz<<a.getNaziv()<<endl;
        izlaz<<"Kolekcija: ";
        izlaz<<a.getPeriod()<<endl;
        izlaz<<"Dimenzije proizvoda: ";
        izlaz<<a.getSirina()<<"x"<<a.getDuzinu()<<"x"<<a.getVisina()<<endl;
        a.ispisi();
        return izlaz;
    }
};

#endif // AKSESOARIC_HPP_INCLUDED
