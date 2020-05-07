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
    void dodajGornjiUZenski( GornjiDelovi &zenski)
    {
        Z+=zenski;
    }
    void dodajGornjiUDeciji( GornjiDelovi &decije)
    {
        D+=decije;
    }

    void dodajDonjiUMuski( DonjiDelovi &muski)
    {
        M+=muski;
    }
    void dodajDonjiUZenski( DonjiDelovi &zenski)
    {
        Z+=zenski;
    }
    void dodajDonjiUDeciji( DonjiDelovi &decije)
    {
        D+=decije;
    }

    void ispisiSvuOdecu()
    {
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| MUSKA ODECA |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        M.ispisGornjih();
        M.ispisDonjih();
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| ZENSKA ODECA |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        Z.ispisGornjih();
        Z.ispisDonjih();
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| DECIJA ODECA |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        D.ispisGornjih();
        D.ispisDonjih();
    }
};

#endif // SVAODECA_HPP_INCLUDED
