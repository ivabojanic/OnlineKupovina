#ifndef ULICA_HPP_INCLUDED
#define ULICA_HPP_INCLUDED

class Ulica
{
private:
    DinString ime;
    int broj;
public:
    void setIme(DinString i)
    {
        ime = i;
    }
    void setBroj(int b)
    {
        if(b>0)
        {
            broj = b;
        }
        else
            cout<<"Nije uneta validna vrednost"<<endl;
    }

    DinString getIme()const
    {
        return ime;
    }
    int getBroj()const
    {
        return broj;
    }

    Ulica()
    {
        ime = "Okrugiceva";
        broj = 16;
    }
    Ulica(DinString im, int br)
    {
        ime = im;
        broj = br;
    }
    Ulica(const Ulica &u)
    {
        ime = u.ime;
        broj = u.broj;
    }

    void ispisUlice()
    {
        cout<<"Ulica: ";
        cout<<getIme()<<","<<getBroj()<<endl;
    }
};

#endif // ULICA_HPP_INCLUDED
