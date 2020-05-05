#ifndef SVAMESTAPRODAVNICA_HPP_INCLUDED
#define SVAMESTAPRODAVNICA_HPP_INCLUDED

#include "Mesto.hpp"

class SvaMestaProdavnica
{
private:
    Lista<Mesto> svaMesta;
public:

    Lista<Mesto> getMesta(){return svaMesta;}

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
            cout<<"Prodajna mesta: "<<endl;
            for(int i = 1; i <= svaMesta.velicina(); i++)
            {
                svaMesta.izlistaj(i,mm);
                mm.ispisMesta();
                cout<<endl;
            }
        }
    }

};

#endif // SVAMESTAPRODAVNICA_HPP_INCLUDED
