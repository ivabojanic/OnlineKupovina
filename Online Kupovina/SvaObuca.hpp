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
        M+=zenski;
    }
    void dodajUDeciji( Obucica &decije)
    {
        M+=decije;
    }

    void ispisiSvuObucu(string p)
    {
        if(p == "MUSKI")
        {
            M.ispisObucice();
        }
        else if(p == "ZENSKI")
        {
            Z.ispisObucice();
        }
        else
            D.ispisObucice();
    }
};

#endif // SVAOBUCA_HPP_INCLUDED
