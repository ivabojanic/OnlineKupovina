#ifndef SVAOBUCA_HPP_INCLUDED
#define SVAOBUCA_HPP_INCLUDED

#include "MuskoOdeljene.hpp"
#include "ZenskoOdeljenje.hpp"
#include "DecijeOdeljenje.hpp"

class SvaObuca
{
private:
    MuskoOdeljenje M;
    ZenskoOdeljenje Z;
    DecijeOdeljenje D;
public:
    void dodajUMuski( Obucica &muski)
    {
        M+=muski;
    }
    void dodajUZenski( Obucica &zenski)
    {
        Z+=zenski;
    }
    void dodajUDeciji( Obucica &decije)
    {
        D+=decije;
    }

    void ispisiSvuObucu()
    {
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| MUSKA OBUCA |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        M.ispisObucice();
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| ZENSKA ODECA |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        Z.ispisObucice();
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| DECIJA ODECA |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        D.ispisObucice();
    }
};

#endif // SVAOBUCA_HPP_INCLUDED
