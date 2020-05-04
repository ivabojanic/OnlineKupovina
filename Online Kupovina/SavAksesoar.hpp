#ifndef SAVAKSESOAR_HPP_INCLUDED
#define SAVAKSESOAR_HPP_INCLUDED

#include "MuskoOdeljene.hpp"
#include "ZenskoOdeljenje.hpp"
#include "DecijeOdeljenje.hpp"

class SavAksesoar
{
private:
    MuskoOdeljenje M;
    ZenskoOdeljenje Z;
    DecijeOdeljenje D;
public:
    void ispisiSavAksesoar(string p)
    {
        if(p == "MUSKI")
        {
            M.ispisAksesoarica();
        }
        else if(p == "ZENSKI")
        {
            Z.ispisAksesoarica();
        }
        else if(p == "DECIJI")
        {
            D.ispisAksesoarica();
        }
    }
};

#endif // SAVAKSESOAR_HPP_INCLUDED
