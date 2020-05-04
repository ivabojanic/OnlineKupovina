#ifndef SVAODECA_HPP_INCLUDED
#define SVAODECA_HPP_INCLUDED

#include "MuskoOdeljene.hpp"
#include "ZenskoOdeljenje.hpp"
#include "DecijeOdeljenje.hpp"

enum vrsta {GORNJI,DONJI,NEMA};
enum deo {ODECA,OBUCA,AKSESOAR};
class SvaOdeca
{
private:
    MuskoOdeljenje M;
    ZenskoOdeljenje Z;
    DecijeOdeljenje D;
public:
    void dodajGornjUMuski( GornjiDelovi &muski)
    {
        M+=muski;
    }
    void dodajUZenski( GornjiDelovi &zenski)
    {
        M+=zenski;
    }
    void dodajUDeciji( GornjiDelovi &decije)
    {
        M+=decije;
    }

    void dodajDonjiUMuski( DonjiDelovi &muski)
    {
        M+=muski;
    }
    void dodajDonjiUZenski( DonjiDelovi &zenski)
    {
        M+=zenski;
    }
    void dodajDonjiUDeciji( DonjiDelovi &decije)
    {
        M+=decije;
    }

    void ispisiSvuOdecu(string p,string v)
    {
        if(p == "MUSKI")
        {
            if(v == "GORNJI")
            {
               M.ispisGornjih();
            }
            else if(v == "DONJI")
            {
                M.ispisDonjih();
            }else if(v == "NEMA")
            {
                cout<<"Nije validna opcija za odecu"<<endl;
            }
        }

        else if(p == "ZENSKI")
        {
            if(v == "GORNJI")
            {
                Z.ispisGornjih();
            }
            else if(v == "DONJI")
            {
                Z.ispisDonjih();
            }else if(v == "NEMA")
            {
                cout<<"Nije validna opcija za odecu"<<endl;
            }
        }
        else if(p == "DECIJI")
        {
            if(v == "GORNJI")
            {
                D.ispisGornjih();
            }
            else if(v == "DONJI")
            {
                D.ispisDonjih();
            }else if(v == "NEMA")
            {
                cout<<"Nije validna opcija za odecu"<<endl;
            }
        }
    }
};

#endif // SVAODECA_HPP_INCLUDED
