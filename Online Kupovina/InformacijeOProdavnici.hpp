#ifndef INFORMACIJEOPRODAVNICI_HPP_INCLUDED
#define INFORMACIJEOPRODAVNICI_HPP_INCLUDED

#include "SvaMestaProdavnica.hpp"
#include "Poslodavac.hpp"
#include "CallCentar.hpp"

class informacijeOProdavnici
{
    SvaMestaProdavnica sva;
    Poslodavac P;
    CallCentar C;
public:
    void setSvaMesta(SvaMestaProdavnica m)
    {
        sva = m;
    }
    void setPoslodavca(Poslodavac posao)
    {
        P = posao;
    }
    void setCall(CallCentar call)
    {
        C = call;
    }

    SvaMestaProdavnica getSvaMesta()const
    {
        return sva;
    }
    Poslodavac getPoslodavac()const
    {
        return P;
    }
    CallCentar getCall()const
    {
        return C;
    }

    void ispisInformacija(SvaMestaProdavnica s,Poslodavac p, CallCentar call)
    {
        s.ispisSvihMesta();
        cout<<"--> POSLODAVAC:"<<endl;
        p.ispis();
        call.ispisCallCentra();
    }
};

#endif // INFORMACIJEOPRODAVNICI_HPP_INCLUDED
