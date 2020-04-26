#include <iostream>
#include "dinstring.hpp"
enum BOJA {BELA,CRNA,CRVENA,ZELENA,PLAVA,ZUTA,NARANDZASTA,LJUBICASTA,ROZE,SIVA,BRAON,ZLATNO,SREBRNO};
enum MODEL {NOVI,LASTSEASON};
enum MATERIJAL {VUNA,PAMUK,POLIESTER,TEKSAS,SVILA,VISKOZA,KASMIR,KREP,PLASTIKA,DRVO,GUMA,PLATNO};
enum ZEMLJA {SRBIJA,INDONEZIJA,TURSKA,KINA,BANGLADES,FRANCUSKA,ITALIJA,TAJLAND};
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
public:
    void setOpis(DinString o){opis = o;}
    void setCena(double c){cena = c;}
    void setBoja(BOJA b){boja = b;}
    void setModel(MODEL m){model = m;}
    void setProizvodjac(DinString p){proizvodjac = p;}
    void setZemlja(ZEMLJA z){zemljaPorekla = z;}
    void setID(DinString i){ID = i;}

    DinString getOpis()const{return opis;}
    double getCena()const {return cena;}
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
        case PLASTIKA:
            return "PLASTIKA";
            break;
        case DRVO:
            return "DRVO";
            break;
        case GUMA:
            return "GUMA";
            break;
        case PLATNO:
            return "PLATNO";
            break;
        default:
            return "Nema materijala";
            break;
        }
    }
    DinString getProizvodjac()const{return proizvodjac;}
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
            return "INDIJA";
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
    DinString getID()const {return ID;}

    void ispisi()
    {
        cout<<"Kratak opis proizvoda: ";
        cout<<getOpis()<<endl;
        cout<<"Cena proizvoda: ";
        cout<<getCena()<<endl;
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
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    }
};
enum velicinaOdece {XS,S,M,L,XL,XXL,XXXL,XXXXL};
enum tipRukava {KRATKI,DUGI};
enum vrstaGornjegDela {MAJICA,DUKSERICA,DZEMPER,ROLKA,HALJINA,TUNIKA,KOMBINEZON};
enum SEZONA {PROLECE,LETO,JESEN,ZIMA};
class GornjiDelovi : public Proizvod
{
private:
    vrstaGornjegDela naziv;
    tipRukava tip;
    velicinaOdece velicina;
    SEZONA sezona;
public:
    void setNaziv(vrstaGornjegDela n){naziv = n;}
    void setTip(tipRukava t){tip = t;}
    void setVelicina(velicinaOdece v){velicina = v;}
    void setSezona(SEZONA s){sezona = s;}

    string getNaziv()const
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
        default:
            return "Nema vrste";
            break;
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
    }
    GornjiDelovi(vrstaGornjegDela n,tipRukava t,velicinaOdece v,SEZONA s,DinString o,double c,BOJA b,MODEL m,MATERIJAL mat,DinString p,ZEMLJA z,DinString i)
    {
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
    }
    GornjiDelovi(const GornjiDelovi &g)
    {
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
    }
    void ispis()
    {
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| PROIZVOD |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"Naziv proizvoda: ";
        cout<<getNaziv()<<","<<getTip()<<endl;
        cout<<"Velicina: ";
        cout<<getVelicina()<<endl;
        cout<<getSezona()<<endl;
        Proizvod::ispisi();
    }
};
enum vrstaDonjegDela {FARMERICE,TRENERKE,SORC,SUKNJA,HELANKE,PANTALONE};
class DonjiDelovi : public Proizvod
{
private:
    vrstaDonjegDela naziv;
    int velicina;
public:
    void setNaziv(vrstaDonjegDela n){naziv = n;}
    void setVelicina(int v)
    {
        if(v >= 18 && v <= 40)
        {
            velicina = v;
        }else
            velicina = 18;
    }

    string getVrsta()const
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
    int getVelicina()const{return velicina;}

    DonjiDelovi()
    {
        naziv = FARMERICE;
        velicina = 28;
        opis = "Farmerice sa pet dzepova,ekstra visokim strukom i nežno zategnutim nogavicama sa sivim rubom.";
        cena = 3200.00;
        boja = PLAVA;
        model = NOVI;
        materijal = TEKSAS;
        proizvodjac = "LCWaikiki";
        zemljaPorekla = BANGLADES;
        ID = "0572998001";

    }
    DonjiDelovi(vrstaDonjegDela n,int v,DinString o,double c,BOJA b,MODEL m,MATERIJAL mat,DinString p,ZEMLJA z,DinString i)
    {
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
    }
    DonjiDelovi(const DonjiDelovi &d)
    {
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
enum POL {MUSKI,ZENSKI,DECIJI};
class Odeca
{
    ///ubaci pol pa po tome odredjuj kasnije iz klase
};
class Obuca
{

};
class Aksesoar
{

};
class MuskoOdeljenje
{
    ///lista odece cipela bla bla
};
class ZenskoOdeljenje
{

};
class DecijeOdeljenje
{

};
class Katalog
{

};
class Osoba
{


};
class Narudzbina
{

};
class Prodavnica
{

};
class Korpa
{

};
class KonacniRacun
{

};
class Lager
{

};
class Kartica
{

};
class Kupovina
{

};
class Isporuka
{

};
class Povracaj
{

};
class Kupac : public Osoba
{

};
class CallCentar
{

};

using namespace std;

int main()
{
    GornjiDelovi G;
    G.ispis();
    DonjiDelovi D;
    D.ispis();
    return 0;
}
