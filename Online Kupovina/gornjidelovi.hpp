#ifndef GORNJIDELOVI_HPP_INCLUDED
#define GORNJIDELOVI_HPP_INCLUDED

#include "proizvod.hpp"

enum velicinaOdece {XS,S,M,L,XL,XXL,XXXL,XXXXL};
enum tipRukava {KRATKI,DUGI};
enum vrstaGornjegDela {MAJICA,DUKSERICA,DZEMPER,ROLKA,HALJINA,TUNIKA,KOMBINEZON,JAKNA};
enum SEZONA {PROLECE,LETO,JESEN,ZIMA};
enum POL {MUSKI,ZENSKI,DECIJI};
class GornjiDelovi : public Proizvod
{
protected:
    POL odeljenje;
    vrstaGornjegDela naziv;
    tipRukava tip;
    velicinaOdece velicina;
    SEZONA sezona;
public:
    void setOdeljenje(POL p){odeljenje = p;}
    void setNaziv(vrstaGornjegDela n){naziv = n;}
    void setTip(tipRukava t){tip = t;}
    void setVelicina(velicinaOdece v){velicina = v;}
    void setSezona(SEZONA s){sezona = s;}

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
    string getMaterijal()const
    {
        switch(materijal)
        {
        case VUNA:
            return "VUNA";
            break;
        case PAMUK:
            return "PAMUK";
            break;
        case POLIESTER:
            return "POLIESTER";
            break;
        case TEKSAS:
            return "TEKSAS";
            break;
        case SVILA:
            return "SVILA";
            break;
        case VISKOZA:
            return "VISKOZA";
            break;
        case KASMIR:
            return "KASMIR";
            break;
        case KREP:
            return "KREP";
            break;
        default:
            return "Nema materijala";
            break;
        }
    }
    string getNaziv()const
    {
        if(getOdeljenje() == "MUSKO")
        {
            switch(naziv)
            {
            case MAJICA:
                return "MAJICA";
                break;
            case DUKSERICA:
                return "DUKSERICA";
                break;
            case DZEMPER:
                return "DZEMPER";
                break;
            case ROLKA:
                return "ROLKA";
                break;
            case JAKNA:
                return "JAKNA";
                break;
            default:
                return "Nema vrste";
                break;
            }
        }
        else
        {
            switch(naziv)
            {
            case MAJICA:
                return "MAJICA";
                break;
            case DUKSERICA:
                return "DUKSERICA";
                break;
            case DZEMPER:
                return "DZEMPER";
                break;
            case ROLKA:
                return "ROLKA";
                break;
            case HALJINA:
                return "HALJINA";
                break;
            case TUNIKA:
                return "TUNIKA";
                break;
            case KOMBINEZON:
                return "KOMBINEZON";
                break;
            case JAKNA:
                return "JAKNA";
                break;
            default:
                return "Nema vrste";
                break;
            }
        }
    }
    string getTip()const
    {
        switch(tip)
        {
        case KRATKI:
            return "KRATKIH RUKAVA";
            break;
        case DUGI:
            return "DUGIH RUKAVA";
            break;
        default:
            return "Nema tipa";
            break;
        }
    }
    string getVelicina()const
    {
        switch(velicina)
        {
        case XS:
            return "XS";
            break;
        case S:
            return "S";
            break;
        case M:
            return "M";
            break;
        case L:
            return "L";
            break;
        case XL:
            return "XL";
            break;
        case XXL:
            return "XXL";
            break;
        case XXXL:
            return "XXXL";
            break;
        case XXXXL:
            return "XXXXL";
            break;
        default:
            return "Nema velicine";
            break;
        }
    }
    string getSezona()const
    {
        switch(sezona)
        {
        case PROLECE:
            return "PROLECNA KOLEKCIJA";
            break;
        case LETO:
            return "LETNJA KOLEKCIJA";
            break;
        case JESEN:
            return "JESENJA KOLEKCIJA";
            break;
        case ZIMA:
            return "ZIMSKA KOLEKCIJA";
            break;
        default:
            return "Nema sezone";
            break;
        }
    }
    GornjiDelovi()
    {
        odeljenje = ZENSKI;
        naziv = HALJINA;
        tip = KRATKI;
        velicina = M;
        sezona = PROLECE;
        opis = "Kratka haljina sa V-izrezom,cvetnim motivom,uskim naramenicama i dugmicima na prednjoj strani.";
        cena = 1200.00;
        boja = CRVENA;
        model = NOVI;
        materijal = SVILA;
        proizvodjac = "FBsister";
        zemljaPorekla = INDONEZIJA;
        ID = "0811471005";
        naLageru = true;
    }
    GornjiDelovi(POL l,vrstaGornjegDela n,tipRukava t,velicinaOdece v,SEZONA s,DinString o,double c,BOJA b,MODEL m,MATERIJAL mat,DinString p,ZEMLJA z,DinString i,bool lag)
    {
        odeljenje = l;
        naziv = n;
        tip = t;
        velicina = v;
        sezona = s;
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
    GornjiDelovi(const GornjiDelovi &g)
    {
        odeljenje = g.odeljenje;
        naziv = g.naziv;
        tip = g.tip;
        velicina = g.velicina;
        sezona = g.sezona;
        opis = g.opis;
        cena = g.cena;
        boja = g.boja;
        model = g.model;
        materijal = g.materijal;
        proizvodjac = g.proizvodjac;
        zemljaPorekla = g.zemljaPorekla;
        ID = g.ID;
        naLageru = g.naLageru;
    }

    friend ostream& operator<<(ostream& izlaz,  GornjiDelovi &g)
    {
        izlaz<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| PROIZVOD |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        izlaz<<"Naziv proizvoda: ";
        izlaz<<g.getNaziv()<<","<<g.getTip()<<endl;
        izlaz<<"Velicina: ";
        izlaz<<g.getVelicina()<<endl;
        izlaz<<g.getSezona()<<endl;
        g.ispisi();
        return izlaz;
    }
};

#endif // GORNJIDELOVI_HPP_INCLUDED
