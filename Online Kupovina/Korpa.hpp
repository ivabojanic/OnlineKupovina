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
    int brojProizvodaUKorpi = 0;
public:
    bool dodajGornjiUKorpu(const GornjiDelovi &gg)
    {
        brojProizvodaUKorpi++;
        return gornjiUKorpu.dodajElement(gornjiUKorpu.velicina()+1,gg);
    }
    bool dodajDonjiUKorpu(const DonjiDelovi &dd)
    {
        brojProizvodaUKorpi++;
        return donjiUKorpu.dodajElement(donjiUKorpu.velicina()+1,dd);
    }
    bool dodajObucuUKorpu(const Obucica &oo)
    {
        brojProizvodaUKorpi++;
        return obucaUKorpu.dodajElement(obucaUKorpu.velicina()+1,oo);
    }
    bool dodajAksesoarUKorpu(const Aksesoaric &aa)
    {
        brojProizvodaUKorpi++;
        return aksesoarUKorpuu.dodajElement(aksesoarUKorpuu.velicina()+1,aa);
    }

    int getBrojUKorpi()const{return brojProizvodaUKorpi;}

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
