#ifndef MUSKOODELJENE_HPP_INCLUDED
#define MUSKOODELJENE_HPP_INCLUDED

#include "gornjidelovi.hpp"
#include "donjidelovi.hpp"
#include "obucica.hpp"
#include "aksesoaric.hpp"

class MuskoOdeljenje
{
private:
    Lista<GornjiDelovi> gornji;
    Lista<DonjiDelovi> donji;
    Lista<Obucica> ob;
    Lista<Aksesoaric> akss;
public:

     void setGornji(Lista<GornjiDelovi> g){gornji = g;}
     void setDonji(Lista<DonjiDelovi> d){donji = d;}
     void setObuca(Lista<Obucica> o){ob = o;}
     void setAksesoar(Lista<Aksesoaric> a){akss = a;}

     Lista<GornjiDelovi> getGornji(){return gornji;}
     Lista<DonjiDelovi> getDonji(){return donji;}
     Lista<Obucica> getOb(){return ob;}
     Lista<Aksesoaric> getAkss(){return akss;}

    MuskoOdeljenje& operator+=(GornjiDelovi& gornjiDelovi)
    {
        if(gornjiDelovi.getOdeljenje()=="MUSKO")
        {
            gornji.dodajElement(gornji.velicina()+1, gornjiDelovi);
        }
            return *this;
    }
    MuskoOdeljenje& operator-=(int mesto)
    {
        gornji.izbrisiElement(mesto);
        return *this;
    }
    MuskoOdeljenje& operator+=(DonjiDelovi& donjiDelovi)
    {
        if(donjiDelovi.getOdeljenje()=="MUSKO")
        {
            donji.dodajElement(donji.velicina()+1, donjiDelovi);
        }
            return *this;
    }
    MuskoOdeljenje& operator+=(Obucica& obuca)
    {
        if(obuca.getOdeljenje()=="MUSKO")
        {
            ob.dodajElement(ob.velicina()+1, obuca);
        }
            return *this;
    }
    MuskoOdeljenje& operator+=(Aksesoaric& aksesoar)
    {
        if(aksesoar.getOdeljenje()=="MUSKO")
        {
            akss.dodajElement(akss.velicina()+1, aksesoar);
        }
            return *this;
    }

    void ispisGornjih()
    {
        if(gornji.velicina() == 0)
        {
            cout<<"------>Nema muskih gornjih delova"<<endl;
        }
        else
        {
            GornjiDelovi d;
            cout<<"Muski gornji delovi :"<<endl;

            for (int i = 1; i <= gornji.velicina(); i++)
            {
                gornji.izlistaj(i, d);
                cout<<d;
            }
        }
    }
    void ispisDonjih()
    {
        if(donji.velicina() == 0)
        {
            cout<<"------>Nema muskih donjih delova"<<endl;
        }
        else
        {
            DonjiDelovi d;
            cout<<"Muski donji delovi :"<<endl;
            cout<<endl;
            for (int i = 1; i <= donji.velicina(); i++)
            {
                donji.izlistaj(i, d);
                cout<<d;
            }
        }
    }
    void ispisObucice()
    {
        if(ob.velicina() == 0)
        {
            cout<<"------>Nema muskih obuca"<<endl;
        }
        else
        {
            Obucica c;
            cout<<"Muska obuca :"<<endl;
            cout<<endl;
            for (int i = 1; i <= ob.velicina(); i++)
            {
                ob.izlistaj(i, c);
                cout<<c;
            }
        }
    }
    void ispisAksesoarica()
    {
        if(akss.velicina() == 0)
        {
            cout<<"------>Nema muskih aksesoara"<<endl;
        }
        else
        {
            Aksesoaric a;
            cout<<"Muski aksesoari :"<<endl;
            cout<<endl;
            for (int i = 1; i <= akss.velicina(); i++)
            {
                akss.izlistaj(i, a);
                cout<<a;
            }
        }
    }
    void ispisMuskog()
    {
        ispisGornjih();
        ispisDonjih();
        ispisObucice();
        ispisAksesoarica();
    }
};
#endif // MUSKOODELJENE_HPP_INCLUDED
