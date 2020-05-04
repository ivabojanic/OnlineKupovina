#ifndef ZENSKOODELJENJE_HPP_INCLUDED
#define ZENSKOODELJENJE_HPP_INCLUDED

#include "gornjidelovi.hpp"
#include "donjidelovi.hpp"
#include "obucica.hpp"
#include "aksesoaric.hpp"

class ZenskoOdeljenje
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

    ZenskoOdeljenje& operator+=(GornjiDelovi& gornjiDelovi)
    {
        if(gornjiDelovi.getOdeljenje()=="ZENSKO")
        {
            gornji.dodajElement(gornji.velicina()+1, gornjiDelovi);
        }
            return *this;
    }
    ZenskoOdeljenje& operator+=(DonjiDelovi& donjiDelovi)
    {
        if(donjiDelovi.getOdeljenje()=="ZENSKO")
        {
            donji.dodajElement(donji.velicina()+1, donjiDelovi);
        }
            return *this;
    }
    ZenskoOdeljenje& operator+=(Obucica& obuca)
    {
        if(obuca.getOdeljenje()=="ZENSKO")
        {
            ob.dodajElement(ob.velicina()+1, obuca);
        }
            return *this;
    }
    ZenskoOdeljenje& operator+=(Aksesoaric& aksesoar)
    {
        if(aksesoar.getOdeljenje()=="ZENSKO")
        {
            akss.dodajElement(akss.velicina()+1, aksesoar);
        }
            return *this;
    }

    void ispisGornjih()
    {
        if(gornji.velicina() == 0)
        {
            cout<<"Nema zenskih gornjih delova"<<endl;
        }
        else
        {
            GornjiDelovi d;
            cout<<"Zenski gornji delovi :"<<endl;

            for (int i = 1; i <= gornji.velicina(); i++)
            {
                gornji.izlistaj(i, d);
                d.ispis();
            }
        }
    }
    void ispisDonjih()
    {
        if(donji.velicina() == 0)
        {
            cout<<"Nema zenskih donjih delova"<<endl;
        }
        else
        {
            DonjiDelovi d;
            cout<<"Zenski donji delovi :"<<endl;

            for (int i = 1; i <= donji.velicina(); i++)
            {
                donji.izlistaj(i, d);
                d.ispis();
            }
        }
    }
    void ispisObucice()
    {
        if(ob.velicina() == 0)
        {
            cout<<"Nema zenskih obuca"<<endl;
        }
        else
        {
            Obucica c;
            cout<<"Zenska obuca :"<<endl;

            for (int i = 1; i <= ob.velicina(); i++)
            {
                ob.izlistaj(i, c);
                c.ispis();
            }
        }
    }
    void ispisAksesoarica()
    {
        if(akss.velicina() == 0)
        {
            cout<<"Nema zenskih aksesoara"<<endl;
        }
        else
        {
            Aksesoaric a;
            cout<<"Zenski aksesoari :"<<endl;

            for (int i = 1; i <= akss.velicina(); i++)
            {
                akss.izlistaj(i, a);
                a.ispis();
            }
        }
    }
    void ispisZenskog()
    {
        ispisGornjih();
        ispisDonjih();
        ispisObucice();
        ispisAksesoarica();
    }
};

#endif // ZENSKOODELJENJE_HPP_INCLUDED