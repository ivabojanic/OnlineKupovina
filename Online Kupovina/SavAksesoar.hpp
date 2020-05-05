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
    void dodajUMuski( Aksesoaric &muski)
    {
        M+=muski;
    }
    void dodajUZenski( Aksesoaric &zenski)
    {
        Z+=zenski;
    }
    void dodajUDeciji( Aksesoaric &decije)
    {
        D+=decije;
    }

    void ispisiSavAksesoar()
    {
        cout<<"MUSKI AKSESOAR:"<<endl;
        M.ispisAksesoarica();
        cout<<"ZENSKI AKSESOAR:"<<endl;
        Z.ispisAksesoarica();
        cout<<"DECIJI AKSESOAR:"<<endl;
        D.ispisAksesoarica();
    }
};

#endif // SAVAKSESOAR_HPP_INCLUDED
