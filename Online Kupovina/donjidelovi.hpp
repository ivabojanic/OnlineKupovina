#ifndef DONJIDELOVI_HPP_INCLUDED
#define DONJIDELOVI_HPP_INCLUDED

#include "proizvod.hpp"

enum vrstaDonjegDela {FARMERICE,TRENERKE,SORC,SUKNJA,HELANKE,PANTALONE};
class DonjiDelovi : public Proizvod
{
protected:
    POL odeljenje;
    vrstaDonjegDela naziv;
    int velicina;
public:
    void setOdeljenje(POL p){odeljenje = p;}
    void setNaziv(vrstaDonjegDela n){naziv = n;}
    void setVelicina(int v)
    {
        if(v >= 18 && v <= 40)
            velicina = v;
    }
    string getMaterijal()const
    {
        switch(materijal)
        {
        case PAMUK:
            return "PAMUK";
            break;
        case TEKSAS:
            return "TEKSAS";
            break;
        case SVILA:
            return "SVILA";
            break;
        case SOMOT:
            return "SOMOT";
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
    string getVrsta()const
    {
        if(getOdeljenje() == "MUSKO")
        {
            switch(naziv)
            {
            case FARMERICE:
                return "FARMERICE";
                break;
            case TRENERKE:
                return "TRENERKE";
                break;
            case SORC:
                return "SORC";
                break;
            case PANTALONE:
                return "PANTALONE";
                break;
            default:
                return "Nema donjeg dela";
                break;
            }
        }
        else
        {
            switch(naziv)
            {
            case FARMERICE:
                return "FARMERICE";
                break;
            case TRENERKE:
                return "TRENERKE";
                break;
            case SORC:
                return "SORC";
                break;
            case SUKNJA:
                return "SUKNJA";
            case HELANKE:
                return "HELANKE";
                break;
            case PANTALONE:
                return "PANTALONE";
                break;
            default:
                return "Nema donjeg dela";
                break;
            }
        }
    }
    int getVelicina()const
    {
        if(velicina >=18 && velicina <= 40)
            return velicina;
        else
            return 0;
    }
    DonjiDelovi()
    {
        odeljenje = ZENSKI;
        naziv = FARMERICE;
        velicina = 28;
        opis = "Farmerice sa pet dzepova,ekstra visokim strukom i neno zategnutim nogavicama sa sivim rubom.";
        cena = 3200.00;
        boja = PLAVA;
        model = NOVI;
        materijal = TEKSAS;
        proizvodjac = "LCWaikiki";
        zemljaPorekla = BANGLADES;
        ID = "0572998001";
        naLageru = false;

    }
    DonjiDelovi(POL l,vrstaDonjegDela n,int v,DinString o,double c,BOJA b,MODEL m,MATERIJAL mat,DinString p,ZEMLJA z,DinString i,bool lag)
    {
        odeljenje = l;
        naziv = n;
        velicina = v;
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
    DonjiDelovi(const DonjiDelovi &d)
    {
        odeljenje = d.odeljenje;
        naziv = d.naziv;
        velicina = d.velicina;
        opis = d.opis;
        cena = d.cena;
        boja = d.boja;
        model = d.model;
        materijal = d.materijal;
        proizvodjac = d.proizvodjac;
        zemljaPorekla = d.zemljaPorekla;
        ID = d.ID;
        naLageru = d.naLageru;
    }
    void ispis()
    {
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| PROIZVOD |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"Naziv proizvoda: ";
        cout<<getVrsta()<<endl;
        cout<<"Velicina: ";
        cout<<getVelicina()<<endl;
        Proizvod::ispisi();
    }
};

#endif // DONJIDELOVI_HPP_INCLUDED
