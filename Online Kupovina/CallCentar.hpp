#ifndef CALLCENTAR_HPP_INCLUDED
#define CALLCENTAR_HPP_INCLUDED

class CallCentar
{
private:
    Mesto m;
    DinString brojTelefona;
public:
    CallCentar():m()
    {
        brojTelefona = "066 924 96 86";
    }
    CallCentar(DinString i,int b,DinString g,DinString br):m(i,b,g)
    {
        brojTelefona = br;
    }
    CallCentar(const CallCentar &c):m(c.m)
    {
        brojTelefona = c.brojTelefona;
    }

    void setMesto(Mesto mes)
    {
        m = mes;
    }
    void setBrojTelefona(DinString br)
    {
        brojTelefona = br;
    }

    Mesto getMesto()const
    {
        return m;
    }
    DinString getBrojTelefona()const
    {
        return brojTelefona;
    }

    void ispisCallCentra()
    {
        cout<<"--> CALLCENTAR"<<endl;
        cout<<getBrojTelefona()<<endl;
        cout<<"Predstavnistvo: ";
        m.ispisMesta();
        cout<<endl;
    }
};

#endif // CALLCENTAR_HPP_INCLUDED
