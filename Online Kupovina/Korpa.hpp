#ifndef KORPA_HPP_INCLUDED
#define KORPA_HPP_INCLUDED

#include "gornjidelovi.hpp"
#include "donjidelovi.hpp"
#include "obucica.hpp"
#include "aksesoaric.hpp"

class Korpa
{
private:
    Lista<GornjiDelovi> gornjiUKorpu;
    Lista<DonjiDelovi> donjiUKorpu;
    Lista<Obucica> obucaUKorpu;
    Lista<Aksesoaric> aksesoarUKorpuu;
    int ukupanRacun = 0;
public:
    Korpa& operator+=(GornjiDelovi& gornjiDelovi)
    {
            gornjiUKorpu.dodajElement(gornjiUKorpu.velicina()+1, gornjiDelovi);
            ukupanRacun+=gornjiDelovi.getCena();
            return *this;
    }
    Korpa& operator+=(DonjiDelovi& donjiDelovi)
    {
            donjiUKorpu.dodajElement(donjiUKorpu.velicina()+1, donjiDelovi);
            ukupanRacun+=donjiDelovi.getCena();
            return *this;
    }
    Korpa& operator+=(Obucica& obuca)
    {
            obucaUKorpu.dodajElement(obucaUKorpu.velicina()+1, obuca);
            ukupanRacun+=obuca.getCena();
            return *this;
    }
    Korpa& operator+=(Aksesoaric& aksesoar)
    {
            aksesoarUKorpuu.dodajElement(aksesoarUKorpuu.velicina()+1, aksesoar);
            ukupanRacun+=aksesoar.getCena();
            return *this;
    }

    int getUkupanRacun()const{return ukupanRacun;}

    void ispisGornjih()
    {
        if(gornjiUKorpu.velicina() == 0)
        {
            cout<<"Nema gornjih delova u korpi"<<endl;
        }
        else
        {
            GornjiDelovi g;
            cout<<"Gornji delovi u korpi :"<<endl;

            for (int i = 1; i <= gornjiUKorpu.velicina(); i++)
            {
                gornjiUKorpu.izlistaj(i, g);
                g.ispis();
            }
        }
    }
    void ispisDonjih()
    {
        if(donjiUKorpu.velicina() == 0)
        {
            cout<<"Nema donjih delova u korpi"<<endl;
        }
        else
        {
            DonjiDelovi d;
            cout<<"Donji delovi u korpi: "<<endl;
            for(int i = 0; i <= donjiUKorpu.velicina(); i++)
            {
                donjiUKorpu.izlistaj(i,d);
                d.ispis();
            }
        }
    }
    void ispisObuce()
    {
        if(obucaUKorpu.velicina() == 0)
        {
            cout<<"Nema obuce u korpi"<<endl;
        }
        else
        {
            Obucica o;
            cout<<"Obuca u korpi: "<<endl;
            for(int i = 0; i <= obucaUKorpu.velicina(); i++)
            {
                obucaUKorpu.izlistaj(i,o);
                o.ispis();
            }
        }
    }
    void ispisAksesoara()
    {
        if(aksesoarUKorpuu.velicina() == 0)
        {
            cout<<"Nema aksesoara u korpi"<<endl;
        }
        else
        {
            Aksesoaric a;
            cout<<"Aksesoari u korpi: "<<endl;
            for(int i = 0; i <= aksesoarUKorpuu.velicina(); i++)
            {
                aksesoarUKorpuu.izlistaj(i,a);
                a.ispis();
            }
        }
    }
    void ispisKorpe()
    {
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|KORPA|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        ispisGornjih();
        ispisDonjih();
        ispisObuce();
        ispisAksesoara();
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    }
};

#endif // KORPA_HPP_INCLUDED
