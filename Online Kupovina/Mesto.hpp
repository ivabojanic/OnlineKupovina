#ifndef MESTO_HPP_INCLUDED
#define MESTO_HPP_INCLUDED

class Mesto
{
private:
    Ulica U;
    DinString grad;
public:
    void setGrad(DinString g){grad = g;}
    DinString getGrad(){return grad;}

    Mesto(): U(){grad = "Novi Sad";}
    Mesto(DinString i,int b,DinString g):U(i,b){grad = g;}
    Mesto(const Mesto &m):U(m.U){grad = m.grad;}

    void ispisMesta()
    {
        cout<<getGrad()<<"-";
        U.ispisUlice();
    }
};

#endif // MESTO_HPP_INCLUDED
