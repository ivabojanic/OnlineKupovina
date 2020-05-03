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
    void ispisiSvuObucu(POL p)
    {
        if(p == MUSKI)
        {
            M.ispisObucice();
        }
        else if(p == ZENSKI)
        {
            Z.ispisObucice();
        }
        else
            D.ispisObucice();
    }
};

#endif // SVAOBUCA_HPP_INCLUDED
