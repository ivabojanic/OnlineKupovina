#ifndef OBUCICA_HPP_INCLUDED
#define OBUCICA_HPP_INCLUDED

#include "proizvod.hpp"

enum vrstaObuce {STIKLE,SANDALE,BALETANKE,SPAGERICE,PATIKE,CIPELE,CIZME,PAPUCE,JAPANKE};
enum nacinZatvaranja {PERTLE,CICAK,KAIS,BEZ};
class Obucica : public Proizvod
{
protected:
    POL odeljenje;
    vrstaObuce naziv;
    int velicina;
    nacinZatvaranja kopca;
    double debljinaDjona;
public:
    void setOdeljenje(POL p){odeljenje = p;}
    void setNaziv(vrstaObuce v){naziv = v;}
    void setVelicina(int v)
    {
        if(odeljenje == MUSKI)
        {
            if(velicina >= 38 && velicina <= 47)
                velicina = v;
        }
        else if(odeljenje == ZENSKI)
        {
            if(velicina >= 36 && velicina <= 42)
                velicina = v;
        }
        else
        {
            if(velicina >= 22 && velicina <= 35)
                velicina = v;
        }
    }
    void setZatvaranje(nacinZatvaranja n){kopca = n;}
    void setDebljina(double d){debljinaDjona = d;}

    string getMaterijal()const
    {
        switch(materijal)
        {
        case GUMA:
            return "GUMA";
            break;
        case KOZA:
            return "KOZA";
            break;
        case PLATNO:
            return "PLATNO";
            break;
        default:
            return "Nema materijala";
            break;
        }
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
        if(getOdeljenje() == "MUSKO")
        {
            switch(naziv)
            {
            case SANDALE:
                return "SANDALE";
                break;
            case PATIKE:
                return "PATIKE";
                break;
            case CIPELE:
                return "CIPELE";
                break;
            case CIZME:
                return "CIZME";
                break;
            case PAPUCE:
                return "PAPUCE";
                break;
            case JAPANKE:
                return "JAPANKE";
                break;
            default:
                return "Nema te vrste";
                break;
            }
        }
        else
        {
            switch(naziv)
            {
            case STIKLE:
                return "STIKLE";
                break;
            case SANDALE:
                return "SANDALE";
                break;
            case BALETANKE:
                return "BALETANKE";
                break;
            case SPAGERICE:
                return "SPAGERICE";
                break;
            case PATIKE:
                return "PATIKE";
                break;
            case CIPELE:
                return "CIPELE";
                break;
            case CIZME:
                return "CIZME";
                break;
            case PAPUCE:
                return "PAPUCE";
                break;
            case JAPANKE:
                return "JAPANKE";
                break;
            default:
                return "Nema te vrste";
                break;
            }
        }
    }
    int getVelicina()const
    {
        if(velicina >= 22 && velicina <= 47)
        {
            return velicina;
        }
        else
            return 0;
    }
    string getKopca()const
    {
        switch(kopca)
        {
        case PERTLE:
            return "Na pertlanje";
            break;
        case CICAK:
            return "Na cicak";
            break;
        case KAIS:
            return "Na kais";
            break;
        case BEZ:
            return "Bez zatvaranja";
            break;
        default:
            return "Nema te vrste";
            break;
        }
    }
    double getDebljina()const{return debljinaDjona;}

    Obucica()
    {
        odeljenje = ZENSKI;
        naziv = STIKLE;
        velicina = 39;
        kopca = BEZ;
        debljinaDjona = 0.2;
        opis = "Satirane sa stiklom od 5cm";
        cena = 2800.00;
        boja = CRVENA;
        model = LASTSEASON;
        materijal = PLATNO;
        proizvodjac = "OhLaLa";
        zemljaPorekla = TURSKA;
        ID = "0662923085";
        naLageru = true;
    }
    Obucica(POL l,vrstaObuce ob,int v,nacinZatvaranja n,double d,DinString o,double c,BOJA b,MODEL m,MATERIJAL mat,DinString p,ZEMLJA z,DinString i,bool lag)
    {
        odeljenje = l;
        naziv = ob;
        velicina = v;
        kopca = n;
        debljinaDjona = d;
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
    Obucica(const Obucica &o)
    {
        odeljenje = o.odeljenje;
        naziv = o.naziv;
        velicina = o.velicina;
        kopca = o.kopca;
        debljinaDjona = o.debljinaDjona;
        opis = o.opis;
        cena = o.cena;
        boja = o.boja;
        model = o.model;
        materijal = o.materijal;
        proizvodjac = o.proizvodjac;
        zemljaPorekla = o.zemljaPorekla;
        ID = o.ID;
        naLageru = o.naLageru;
    }
    friend ostream& operator<<(ostream& izlaz,  Obucica &o)
    {
        izlaz<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| PROIZVOD |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        izlaz<<"Naziv proizvoda: ";
        izlaz<<o.getNaziv()<<endl;
        izlaz<<"Velicina: ";
        izlaz<<o.getVelicina()<<endl;
        izlaz<<"Vrsta zakovcavanja: ";
        izlaz<<o.getKopca()<<endl;
        izlaz<<"Debljina djona: ";
        izlaz<<o.getDebljina()<<endl;
        o.ispisi();
        return izlaz;
    }
};

#endif // OBUCICA_HPP_INCLUDED
