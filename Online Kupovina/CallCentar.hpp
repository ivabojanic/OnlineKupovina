#ifndef CALLCENTAR_HPP_INCLUDED
#define CALLCENTAR_HPP_INCLUDED

class CallCentar
{
private:
    Mesto m;
    DinString brojTelefona;
public:
    CallCentar():m(){brojTelefona = "066 924 96 86";}
    CallCentar(DinString i,int b,DinString g,DinString br):m(i,b,g){brojTelefona = br;}
    CallCentar(const CallCentar &c):m(c.m){brojTelefona = c.brojTelefona;}

    void setBrojTelefona(DinString br){brojTelefona = br;}
    DinString getBrojTelefona()const{return brojTelefona;}

    void ispisCallCentra()
    {
        cout<<"CALLCENTAR"<<endl;
        cout<<getBrojTelefona()<<endl;
        m.ispisMesta();
    }
};

#endif // CALLCENTAR_HPP_INCLUDED
