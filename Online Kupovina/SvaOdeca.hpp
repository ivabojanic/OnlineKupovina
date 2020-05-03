#ifndef SVAODECA_HPP_INCLUDED
#define SVAODECA_HPP_INCLUDED

#include "MuskoOdeljene.hpp"
#include "ZenskoOdeljenje.hpp"
#include "DecijeOdeljenje.hpp"

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
            }
            else if(v == DONJI)
                M.ispisDonjih();
        }
        else if(p == ZENSKI)
        {
            if(v == GORNJI)
            {
                Z.ispisGornjih();
            }
            else if(v == DONJI)
                Z.ispisDonjih();
        }
        else if(p == DECIJI)
        {
            if(v == GORNJI)
            {
                D.ispisGornjih();
            }
            else if(v == DONJI)
                D.ispisDonjih();
        }
    }
};

#endif // SVAODECA_HPP_INCLUDED
