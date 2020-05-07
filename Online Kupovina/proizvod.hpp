#ifndef PROIZVOD_HPP_INCLUDED
#define PROIZVOD_HPP_INCLUDED

enum BOJA {BELA,CRNA,CRVENA,ZELENA,PLAVA,ZUTA,NARANDZASTA,LJUBICASTA,ROZE,SIVA,BRAON,ZLATNO,SREBRNO};
enum MODEL {NOVI,LASTSEASON};
enum MATERIJAL {VUNA,PAMUK,POLIESTER,TEKSAS,SVILA,VISKOZA,KASMIR,KREP,SOMOT,PLASTIKA,GUMA,PLATNO,KOZA};
enum ZEMLJA {SRBIJA,INDONEZIJA,TURSKA,KINA,BANGLADES,FRANCUSKA,ITALIJA,TAJLAND,SAD};
class Proizvod
{
protected:
    DinString opis;
    double cena;
    BOJA boja;
    MODEL model;
    MATERIJAL materijal;
    DinString proizvodjac;
    ZEMLJA zemljaPorekla;
    DinString ID;
    bool naLageru;
public:
    void setOpis(DinString o)
    {
        opis = o;
    }
    void setCena(double c)
    {
        cena = c;
    }
    void setBoja(BOJA b)
    {
        boja = b;
    }
    void setModel(MODEL m)
    {
        model = m;
    }
    void setMaterijal(MATERIJAL mat)
    {
        materijal = mat;
    }
    void setProizvodjac(DinString p)
    {
        proizvodjac = p;
    }
    void setZemlja(ZEMLJA z)
    {
        zemljaPorekla = z;
    }
    void setID(DinString i)
    {
        ID = i;
    }
    void setLager(bool l)
    {
        naLageru = l;
    }

    DinString getOpis()const
    {
        return opis;
    }
    double getCena()const
    {
        return cena;
    }
    string getBoja()const
    {
        switch(boja)
        {
        case BELA:
            return "BELA";
            break;
        case CRNA:
            return "CRNA";
            break;
        case CRVENA:
            return "CRVENA";
            break;
        case ZELENA:
            return "ZELENA";
            break;
        case PLAVA:
            return "PLAVA";
            break;
        case ZUTA:
            return "ZUTA";
            break;
        case NARANDZASTA:
            return "NARANDZASTA";
            break;
        case LJUBICASTA:
            return "LJUBICASTA";
            break;
        case ROZE:
            return "ROZE";
            break;
        case SIVA:
            return "SIVA";
            break;
        case BRAON:
            return "BRAON";
            break;
        case ZLATNO:
            return "ZLATNO";
            break;
        case SREBRNO:
            return "SREBRNO";
            break;
        default:
            return "Nema boje";
            break;
        }
    }
    string getModel()const
    {
        switch(model)
        {
        case NOVI:
            return "NOVI MODEL";
            break;
        case LASTSEASON:
            return "LAST SEASON";
            break;
        default:
            return "Nema modela";
            break;
        }
    }
    virtual string getMaterijal()const = 0;
    DinString getProizvodjac()const
    {
        return proizvodjac;
    }
    string getDrzava()const
    {
        switch(zemljaPorekla)
        {
        case SRBIJA:
            return "SRBIJA";
            break;
        case INDONEZIJA:
            return "INDONEZIJA";
            break;
        case TURSKA:
            return "TURSKA";
            break;
        case KINA:
            return "KINA";
            break;
        case BANGLADES:
            return "BANGLADES";
            break;
        case FRANCUSKA:
            return "FRANCUSKA";
            break;
        case ITALIJA:
            return "ITALIJA";
            break;
        case TAJLAND:
            return "TAJLAND";
            break;
        default:
            return "Nema drzave";
            break;
        }
    }
    DinString getID()const
    {
        return ID;
    }

    string getLager()const
    {
        if(naLageru == true)
        {
            return  "Ima na lageru";
        }
        else
            return "Nema na lageru";
    }
    void ispisi()
    {
        cout<<"Kratak opis proizvoda: ";
        cout<<getOpis()<<endl;
        cout<<"Cena proizvoda: ";
        cout<<getCena();
        cout<<" dinara"<<endl;
        cout<<"Boja proizvoda: ";
        cout<<getBoja()<<endl;
        cout<<"Model: ";
        cout<<getModel()<<endl;
        cout<<"Materijal: ";
        cout<<getMaterijal()<<endl;
        cout<<"Proizvodjac: ";
        cout<<getProizvodjac()<<endl;
        cout<<"Mesto proizvodnje: ";
        cout<<getDrzava()<<endl;
        cout<<"ID proizvoda: ";
        cout<<getID()<<endl;
        cout<<"Lager: ";
        cout<<getLager()<<endl;
    }
};

#endif // PROIZVOD_HPP_INCLUDED
