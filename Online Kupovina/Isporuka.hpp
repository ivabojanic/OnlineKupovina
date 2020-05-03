#ifndef ISPORUKA_HPP_INCLUDED
#define ISPORUKA_HPP_INCLUDED

class Isporuka
{
    DinString datumIsporuke;
    DinString dostavnaSluzba;
    double cenaIsporuke;
public:
    Isporuka(){datumIsporuke = "05.05.2020"; dostavnaSluzba = "Posta Pezos"; cenaIsporuke = 200.00;}
    Isporuka(DinString d, DinString s, double c){datumIsporuke = d; dostavnaSluzba = s; cenaIsporuke = c;}
    Isporuka(const Isporuka &i){datumIsporuke = i.datumIsporuke; dostavnaSluzba = i.dostavnaSluzba; cenaIsporuke = i.cenaIsporuke;}

    void setDatum(DinString dat){datumIsporuke = dat;}
    void setDostava(DinString dostava){dostavnaSluzba = dostava;}
    void setCena(double cena){cenaIsporuke = cena;}

    DinString getDatum()const{return datumIsporuke;}
    DinString getDostava()const{return dostavnaSluzba;}
    double getCena()const{return cenaIsporuke;}

    void ispisIsporuke()
    {
        cout<<"Vas paket ce biti dostavljen: "<<getDatum()<<endl;
        cout<<"Dostavna sluzba: "<<getDostava()<<endl;
    }
};

#endif // ISPORUKA_HPP_INCLUDED
