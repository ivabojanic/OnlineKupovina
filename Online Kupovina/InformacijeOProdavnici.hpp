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
    void ispisInformacija(SvaMestaProdavnica s,Poslodavac p, CallCentar call)
    {
        s.ispisSvihMesta();
        p.ispis();
        call.ispisCallCentra();
    }
};

#endif // INFORMACIJEOPRODAVNICI_HPP_INCLUDED
