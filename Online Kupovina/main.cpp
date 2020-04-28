#include <iostream>
#include "dinstring.hpp"
#include "lista.hpp"

using namespace std;

enum BOJA {BELA,CRNA,CRVENA,ZELENA,PLAVA,ZUTA,NARANDZASTA,LJUBICASTA,ROZE,SIVA,BRAON,ZLATNO,SREBRNO};
enum MODEL {NOVI,LASTSEASON};
enum MATERIJAL {VUNA,PAMUK,POLIESTER,TEKSAS,SVILA,VISKOZA,KASMIR,KREP,SOMOT,PLASTIKA,GUMA,PLATNO,KOZA};///dodaj za aksesoar
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
    void setMaterijal(MATERIJAL mat){materijal = mat;}
    void setProizvodjac(DinString p){proizvodjac = p;}
    void setZemlja(ZEMLJA z){zemljaPorekla = z;}
    void setID(DinString i){ID = i;}

    DinString getOpis()const{return opis;}
    double getCena()const{return cena;}
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
    DinString getID()const{return ID;}

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
    }
};
enum velicinaOdece {XS,S,M,L,XL,XXL,XXXL,XXXXL};
enum tipRukava {KRATKI,DUGI};
enum vrstaGornjegDela {MAJICA,DUKSERICA,DZEMPER,ROLKA,HALJINA,TUNIKA,KOMBINEZON,JAKNA};
enum SEZONA {PROLECE,LETO,JESEN,ZIMA};
enum POL {MUSKI,ZENSKI,DECIJI};
class GornjiDelovi : public Proizvod
{
private:
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
    }
    GornjiDelovi(POL l,vrstaGornjegDela n,tipRukava t,velicinaOdece v,SEZONA s,DinString o,double c,BOJA b,MODEL m,MATERIJAL mat,DinString p,ZEMLJA z,DinString i)
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
        opis = "Farmerice sa pet dzepova,ekstra visokim strukom i nežno zategnutim nogavicama sa sivim rubom.";
        cena = 3200.00;
        boja = PLAVA;
        model = NOVI;
        materijal = TEKSAS;
        proizvodjac = "LCWaikiki";
        zemljaPorekla = BANGLADES;
        ID = "0572998001";

    }
    DonjiDelovi(POL l,vrstaDonjegDela n,int v,DinString o,double c,BOJA b,MODEL m,MATERIJAL mat,DinString p,ZEMLJA z,DinString i)
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
enum vrstaObuce {STIKLE,SANDALE,BALETANKE,SPAGERICE,PATIKE,CIPELE,CIZME,PAPUCE,JAPANKE};
enum nacinZatvaranja {PERTLE,CICAK,KAIS,BEZ};
class Obucica : public Proizvod
{
private:
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
    }
    Obucica(POL l,vrstaObuce ob,int v,nacinZatvaranja n,double d,DinString o,double c,BOJA b,MODEL m,MATERIJAL mat,DinString p,ZEMLJA z,DinString i)
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
    }
    void ispis()
    {
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| PROIZVOD |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"Naziv proizvoda: ";
        cout<<getNaziv()<<endl;
        cout<<"Velicina: ";
        cout<<getVelicina()<<endl;
        cout<<"Vrsta zakovcavanja: ";
        cout<<getKopca()<<endl;
        cout<<"Debljina djona: ";
        cout<<getDebljina()<<endl;
        Proizvod::ispisi();
    }
};
enum aks {NAOCARE,KACKET,TORBA,SESIR,NESESER,SAL,KAPA,RUKAVICE,RANAC,};
class Aksesoaric : public Proizvod
{
private:
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
        }else
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
        }else
            return "Nema perioda";
    }
    double getDuzinu()const{return duzina;}
    double getSirina()const{return sirina;}
    double getVisina()const{return visina;}

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
    }
    Aksesoaric(POL l,SEZONA e,aks a,double sir,double duz,double vis,DinString o,double c,BOJA b,MODEL m,MATERIJAL mat,DinString p,ZEMLJA z,DinString i)
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
    }
    void ispis()
    {
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| PROIZVOD |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"Naziv proizvoda: ";
        cout<<getNaziv()<<endl;
        cout<<"Kolekcija: ";
        cout<<getPeriod()<<endl;
        cout<<"Dimenzije proizvoda: ";
        cout<<getSirina()<<"x"<<getDuzinu()<<"x"<<getVisina()<<endl;
        Proizvod::ispisi();
    }
};
class MuskoOdeljenje
{
private:
    Lista<GornjiDelovi> gornji;
    Lista<DonjiDelovi> donji;
    Lista<Obucica> ob;
    Lista<Aksesoaric> akss;
public:
        bool dodajUGornje(const GornjiDelovi &gg)
        {
            if(gg.getOdeljenje() == "MUSKO")
            {
                return gornji.dodajElement(gornji.velicina()+1,gg);
            }
            return false;
        }
        void ispisGornjih()
    {
        if(gornji.velicina() == 0)
        {
            cout<<"Nema muskih gornjih delova"<<endl;
        } else
        {
            GornjiDelovi d;
            cout<<"Muski gornji delovi :"<<endl;

            for (int i = 1; i <= gornji.velicina(); i++)
            {
                gornji.izlistaj(i, d);
                d.ispis();
            }
        }
    }
     bool dodajUDonje(const DonjiDelovi &dd)
        {
            if(dd.getOdeljenje() == "MUSKO")
            {
                return donji.dodajElement(donji.velicina()+1,dd);
            }
            return false;
        }
        void ispisDonjih()
    {
        if(donji.velicina() == 0)
        {
            cout<<"Nema muskih donjih delova"<<endl;
        } else
        {
            DonjiDelovi d;
            cout<<"Muski donji delovi :"<<endl;

            for (int i = 1; i <= donji.velicina(); i++)
            {
                donji.izlistaj(i, d);
                d.ispis();
            }
        }
    }
     bool dodajUObucicu(const Obucica &oo)
        {
            if(oo.getOdeljenje() == "MUSKO")
            {
                return ob.dodajElement(ob.velicina()+1,oo);
            }
            return false;
        }
        void ispisObucice()
    {
        if(ob.velicina() == 0)
        {
            cout<<"Nema muskih obuca"<<endl;
        } else
        {
            Obucica c;
            cout<<"Muska obuca :"<<endl;

            for (int i = 1; i <= ob.velicina(); i++)
            {
                ob.izlistaj(i, c);
                c.ispis();
            }
        }
    }
     bool dodajUAksesoaric(const Aksesoaric &aa)
        {
            if(aa.getOdeljenje() == "MUSKO")
            {
                return akss.dodajElement(akss.velicina()+1,aa);
            }
            return false;
        }
        void ispisAksesoarica()
    {
        if(akss.velicina() == 0)
        {
            cout<<"Nema muskih aksesoara"<<endl;
        } else
        {
            Aksesoaric a;
            cout<<"Muski aksesoari :"<<endl;

            for (int i = 1; i <= akss.velicina(); i++)
            {
                akss.izlistaj(i, a);
                a.ispis();
            }
        }
    }
};
class ZenskoOdeljenje
{
private:
    Lista<GornjiDelovi> gornji;
    Lista<DonjiDelovi> donji;
    Lista<Obucica> ob;
    Lista<Aksesoaric> akss;
public:
        bool dodajUGornje(const GornjiDelovi &gg)
        {
            if(gg.getOdeljenje() == "ZENSKO")
            {
                return gornji.dodajElement(gornji.velicina()+1,gg);
            }
            return false;
        }
        void ispisGornjih()
    {
        if(gornji.velicina() == 0)
        {
            cout<<"Nema zenskih gornjih delova"<<endl;
        } else
        {
            GornjiDelovi d;
            cout<<"Zenski gornji delovi :"<<endl;

            for (int i = 1; i <= gornji.velicina(); i++)
            {
                gornji.izlistaj(i, d);
                d.ispis();
            }
        }
    }
     bool dodajUDonje(const DonjiDelovi &dd)
        {
            if(dd.getOdeljenje() == "ZENSKO")
            {
                return donji.dodajElement(donji.velicina()+1,dd);
            }
            return false;
        }
        void ispisDonjih()
    {
        if(donji.velicina() == 0)
        {
            cout<<"Nema zenskih donjih delova"<<endl;
        } else
        {
            DonjiDelovi d;
            cout<<"Zenski donji delovi :"<<endl;

            for (int i = 1; i <= donji.velicina(); i++)
            {
                donji.izlistaj(i, d);
                d.ispis();
            }
        }
    }
     bool dodajUObucicu(const Obucica &oo)
        {
            if(oo.getOdeljenje() == "ZENSKO")
            {
                return ob.dodajElement(ob.velicina()+1,oo);
            }
            return false;
        }
        void ispisObucice()
    {
        if(ob.velicina() == 0)
        {
            cout<<"Nema zenskih obuca"<<endl;
        } else
        {
            Obucica c;
            cout<<"Zenska obuca :"<<endl;

            for (int i = 1; i <= ob.velicina(); i++)
            {
                ob.izlistaj(i, c);
                c.ispis();
            }
        }
    }
     bool dodajUAksesoaric(const Aksesoaric &aa)
        {
            if(aa.getOdeljenje() == "ZENSKO")
            {
                return akss.dodajElement(akss.velicina()+1,aa);
            }
            return false;
        }
        void ispisAksesoarica()
    {
        if(akss.velicina() == 0)
        {
            cout<<"Nema zenskih aksesoara"<<endl;
        } else
        {
            Aksesoaric a;
            cout<<"Zenski aksesoari :"<<endl;

            for (int i = 1; i <= akss.velicina(); i++)
            {
                akss.izlistaj(i, a);
                a.ispis();
            }
        }
    }
};
class DecijeOdeljenje
{
private:
    Lista<GornjiDelovi> gornji;
    Lista<DonjiDelovi> donji;
    Lista<Obucica> ob;
    Lista<Aksesoaric> akss;
public:
        bool dodajUGornje(const GornjiDelovi &gg)
        {
            if(gg.getOdeljenje() == "DECIJE")
            {
                return gornji.dodajElement(gornji.velicina()+1,gg);
            }
            return false;
        }
        void ispisGornjih()
    {
        if(gornji.velicina() == 0)
        {
            cout<<"Nema decijih gornjih delova"<<endl;
        } else
        {
            GornjiDelovi d;
            cout<<"Deciji gornji delovi :"<<endl;

            for (int i = 1; i <= gornji.velicina(); i++)
            {
                gornji.izlistaj(i, d);
                d.ispis();
            }
        }
    }
     bool dodajUDonje(const DonjiDelovi &dd)
        {
            if(dd.getOdeljenje() == "DECIJE")
            {
                return donji.dodajElement(donji.velicina()+1,dd);
            }
            return false;
        }
        void ispisDonjih()
    {
        if(donji.velicina() == 0)
        {
            cout<<"Nema decijih donjih delova"<<endl;
        } else
        {
            DonjiDelovi d;
            cout<<"Deciji donji delovi :"<<endl;

            for (int i = 1; i <= donji.velicina(); i++)
            {
                donji.izlistaj(i, d);
                d.ispis();
            }
        }
    }
     bool dodajUObucicu(const Obucica &oo)
        {
            if(oo.getOdeljenje() == "DECIJE")
            {
                return ob.dodajElement(ob.velicina()+1,oo);
            }
            return false;
        }
        void ispisObucice()
    {
        if(ob.velicina() == 0)
        {
            cout<<"Nema decije obuce"<<endl;
        } else
        {
            Obucica c;
            cout<<"Decija obuca :"<<endl;

            for (int i = 1; i <= ob.velicina(); i++)
            {
                ob.izlistaj(i, c);
                c.ispis();
            }
        }
    }
     bool dodajUAksesoaric(const Aksesoaric &aa)
        {
            if(aa.getOdeljenje() == "DECIJE")
            {
                return akss.dodajElement(akss.velicina()+1,aa);
            }
            return false;
        }
        void ispisAksesoarica()
    {
        if(akss.velicina() == 0)
        {
            cout<<"Nema decijeg aksesoara"<<endl;
        } else
        {
            Aksesoaric a;
            cout<<"Deciji aksesoari :"<<endl;

            for (int i = 1; i <= akss.velicina(); i++)
            {
                akss.izlistaj(i, a);
                a.ispis();
            }
        }
    }
};
enum vrsta {GORNJI,DONJI};
enum deo {ODECA,OBUCA,AKSESOAR};
class SvaOdeca
{
private:
    MuskoOdeljenje M;
    ZenskoOdeljenje Z;
    DecijeOdeljenje D;
public:
    void ispisiSvuOdecu(POL p,vrsta v)
    {
        if(p == MUSKI)
        {
            if(v == GORNJI)
            {
                M.ispisGornjih();
            }else if(v == DONJI)
                M.ispisDonjih();
        }else if(p == ZENSKI)
        {
            if(v == GORNJI)
            {
                Z.ispisGornjih();
            }else if(v == DONJI)
                Z.ispisDonjih();
        }else if(p == DECIJI)
        {
            if(v == GORNJI)
            {
                D.ispisGornjih();
            }else if(v == DONJI)
                D.ispisDonjih();
        }
    }
};
class SvaObuca
{
private:
    MuskoOdeljenje M;
    ZenskoOdeljenje Z;
    DecijeOdeljenje D;
public:
    void ispisiSvuObucu(POL p)
    {
        if(p == MUSKI)
        {
            M.ispisObucice();
        }else if(p == ZENSKI)
        {
            Z.ispisObucice();
        }else
            D.ispisObucice();
    }
};
class SavAksesoar
{
private:
    MuskoOdeljenje M;
    ZenskoOdeljenje Z;
    DecijeOdeljenje D;
public:
    void ispisiSavAksesoar(POL p)
    {
        if(p == MUSKI)
        {
            M.ispisAksesoarica();
        }else if(p == ZENSKI)
        {
            Z.ispisAksesoarica();
        }else if(p == DECIJI)
        {
             D.ispisAksesoarica();
        }
    }
};
class Katalog{};
class Osoba
{
/// izvesti prodavac i kupac prodavac moze da dodaje u prodavnicu

};
class Narudzbina{};
class Korpa
{
///lista proizvoda dodaj obrisi p i kartica k i prodavnica p,osoba o
///metode kupi dodaj u korpu oduzmi iz korpe
};
class Lager{};
class Kartica{};
class Kupovina{};
class Isporuka{};
class Kupac : public Osoba{};
class Radnik : public Osoba{};
class Mesto{/*lista mesta prodavnica*/};
class info{};
class Prodavnica
{
private:
    deo d;
    POL pol;
    vrsta vrs;
    SvaOdeca S;
    SvaObuca O;
    SavAksesoar A;
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
            return "Gornji delovi";
            break;
        case DONJI:
            return "Donji delovi";
            break;
        default:
            return "Nema vrste";
            break;
        }
    }
    Prodavnica(){d = ODECA; pol = MUSKI; vrs = GORNJI;}
    Prodavnica(deo dd,POL p,vrsta v){d = dd; pol = p; vrs = v;}
    Prodavnica(const Prodavnica &pro){d = pro.d; pol = pro.pol; vrs = pro.vrs;}

    void ispisiZeljeniDeoProdavnice(deo d,POL pol,vrsta vrs)
    {
        if(d == ODECA)
        {
            S.ispisiSvuOdecu(pol,vrs);
        }else if(d == OBUCA)
        {
            O.ispisiSvuObucu(pol);
        }else if(d == AKSESOAR)
        {
            A.ispisiSavAksesoar(pol);
        }
    }
};
int main()
{
    GornjiDelovi G;
    GornjiDelovi G2(G);
    G.ispis();
    DonjiDelovi D;
    D.ispis();
    Obucica Z;
    Z.ispis();
    Aksesoaric A;
    A.ispis();
    ZenskoOdeljenje O;
    O.dodajUGornje(G2);
    O.ispisGornjih();
    ZenskoOdeljenje LJ;
    LJ.dodajUDonje(D);
    LJ.ispisDonjih();
    return 0;
}
