#ifndef PRODAVNICA_HPP_INCLUDED
#define PRODAVNICA_HPP_INCLUDED

#include "Isporuka.hpp"

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

    void ispisiZeljeniDeoProdavnice(string d,string pol,string vrs)
    {
        if(d == "ODECA")
        {
            S.ispisiSvuOdecu(pol,vrs);
        }
        else if(d == "OBUCA")
        {
            O.ispisiSvuObucu(pol);
        }
        else if(d == "AKSESOAR")
        {
            A.ispisiSavAksesoar(pol);
        }
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
    void ispisInformacijaOProdavnici(){info.ispisInformacija();}
};

#endif // PRODAVNICA_HPP_INCLUDED
