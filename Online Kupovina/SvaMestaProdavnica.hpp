#ifndef SVAMESTAPRODAVNICA_HPP_INCLUDED
#define SVAMESTAPRODAVNICA_HPP_INCLUDED

#include "Mesto.hpp"

class SvaMestaProdavnica
{
private:
    Lista<Mesto> svaMesta;
    int brojMesta;
public:
    void setBrojMesta(int br){brojMesta = br;}
    int getBrojMesta()const{return brojMesta;}

    SvaMestaProdavnica& operator+=(Mesto& mesto)
    {
            svaMesta.dodajElement(svaMesta.velicina()+1, mesto);
            return *this;
    }

    void ispisSvihMesta()
    {
        if(svaMesta.velicina() == 0)
        {
            cout<<"Nema prodajnih mesta"<<endl;
        }
        else
        {
            Mesto mm;
            cout<<"Prodajna mesta ("<<getBrojMesta()<<"): "<<endl;
            for(int i = 0; i <= svaMesta.velicina(); i++)
            {
                svaMesta.izlistaj(i,mm);
                mm.ispisMesta();
            }
        }
    }
};

#endif // SVAMESTAPRODAVNICA_HPP_INCLUDED
