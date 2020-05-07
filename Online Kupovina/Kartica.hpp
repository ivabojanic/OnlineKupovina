#ifndef KARTICA_HPP_INCLUDED
#define KARTICA_HPP_INCLUDED

class Kartica
{
private:
    DinString noKartice;
    DinString pin;
    double iznosNovca;
public:
    Kartica()
    {
        noKartice = "123456789";
        pin = "1425";
        iznosNovca = 100000.00;
    }
    Kartica(DinString nk, DinString p, double i)
    {
        noKartice = nk;
        pin = p;
        iznosNovca = i;
    }
    Kartica(const Kartica &k)
    {
        noKartice = k.noKartice;
        pin = k.pin;
        iznosNovca = k.iznosNovca;
    }

    void setnoKartice(DinString no)
    {
        noKartice = no;
    }
    void setPin(DinString p)
    {
        pin = p;
    }
    void setIznosNovca(double i)
    {
        iznosNovca = i;
    }

    DinString getnoKartice()const
    {
        return noKartice;
    }
    DinString getPin()const
    {
        return pin;
    }
    double getIznosNovca()const
    {
        return iznosNovca;
    }

    void skiniNovacSaKartice(double novac)
    {
        if(novac > 0 && novac <= iznosNovca)
        {
            iznosNovca-=novac;
        }
        else
        {
            cout<<"Nemate dovoljno novca na kartici"<<endl;
        }
    }
    void ispisKartice()
    {
        cout<<"Broj kartice: ";
        cout<<getnoKartice()<<endl;
        cout<<"Iznos novca na kartici: ";
        cout<<getIznosNovca()<<endl;
        cout<<endl;
    }
};

#endif // KARTICA_HPP_INCLUDED
