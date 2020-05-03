#ifndef DECIJEODELJENJE_HPP_INCLUDED
#define DECIJEODELJENJE_HPP_INCLUDED

#include "gornjidelovi.hpp"
#include "donjidelovi.hpp"
#include "obucica.hpp"
#include "aksesoaric.hpp"

class DecijeOdeljenje
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

    DecijeOdeljenje& operator+=(GornjiDelovi& gornjiDelovi)
    {
        if(gornjiDelovi.getOdeljenje()=="DECIJE")
        {
            gornji.dodajElement(gornji.velicina()+1, gornjiDelovi);
        }
            return *this;
    }
    DecijeOdeljenje& operator+=(DonjiDelovi& donjiDelovi)
    {
        if(donjiDelovi.getOdeljenje()=="DECIJE")
        {
            donji.dodajElement(donji.velicina()+1, donjiDelovi);
        }
            return *this;
    }
    DecijeOdeljenje& operator+=(Obucica& obuca)
    {
        if(obuca.getOdeljenje()=="DECIJE")
        {
            ob.dodajElement(ob.velicina()+1, obuca);
        }
            return *this;
    }
    DecijeOdeljenje& operator+=(Aksesoaric& aksesoar)
    {
        if(aksesoar.getOdeljenje()=="DECIJE")
        {
            akss.dodajElement(akss.velicina()+1, aksesoar);
        }
            return *this;
    }

    void ispisGornjih()
    {
        if(gornji.velicina() == 0)
        {
            cout<<"Nema decijih gornjih delova"<<endl;
        }
        else
        {
            GornjiDelovi d;
            cout<<"Deciji gornji delovi :"<<endl;

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
            cout<<"Nema decijih donjih delova"<<endl;
        }
        else
        {
            DonjiDelovi d;
            cout<<"Deciji donji delovi :"<<endl;

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
            cout<<"Nema decije obuce"<<endl;
        }
        else
        {
            Obucica c;
            cout<<"Decija obuca :"<<endl;

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
            cout<<"Nema decijeg aksesoara"<<endl;
        }
        else
        {
            Aksesoaric a;
            cout<<"Deciji aksesoari :"<<endl;

            for (int i = 1; i <= akss.velicina(); i++)
            {
                akss.izlistaj(i, a);
                a.ispis();
            }
        }
    }
      void ispisDecijeg()
    {
        ispisGornjih();
        ispisDonjih();
        ispisObucice();
        ispisAksesoarica();
    }
};

#endif // DECIJEODELJENJE_HPP_INCLUDED
