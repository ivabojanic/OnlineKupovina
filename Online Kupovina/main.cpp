#include <iostream>
#include "dinstring.hpp"
#include "lista.hpp"

#include "proizvod.hpp"
#include "gornjidelovi.hpp"
#include "donjidelovi.hpp"
#include "obucica.hpp"
#include "aksesoaric.hpp"
#include "MuskoOdeljene.hpp"
#include "ZenskoOdeljenje.hpp"
#include "DecijeOdeljenje.hpp"
#include "SvaOdeca.hpp"
#include "SvaObuca.hpp"
#include "SavAksesoar.hpp"
#include "Ulica.hpp"
#include "Mesto.hpp"
#include "Kartica.hpp"
#include "Osoba.hpp"
#include "Kupac.hpp"
#include "Poslodavac.hpp"
#include "Korpa.hpp"
#include "CallCentar.hpp"
#include "InformacijeOProdavnici.hpp"
#include "Prodavnica.hpp"

using namespace std;

int meni()
{
    int izaberiOperaciju;
    do{
        cout<<"\nIzaberite zeljenu operaciju:\n";
        cout<<" 1. Ispitivanje rada svih konstruktora(prazan,sa parametrima,kopije)"<<endl;
        cout<<" 2. Proba ispisa liste mesta prodavnica"<<endl;
        cout<<" 3. Proba ispisa zeljenog dela prodavnice"<<endl;
        cout<<" 4. Proba ispisa korpe"<<endl;
        cout<<" 5. Proba ispisa konacnog racuna"<<endl;
        cout<<" 6. Kupovina proizvoda iz korpe"<<endl;
        cout<<" 7. KRAJ RADA PROGRAMA";
        cout<<"\n>>>";
        cin>>izaberiOperaciju;
        if(izaberiOperaciju < 1 || izaberiOperaciju > 7)
            cout<<"\nOpcija van opsega (1-6)! Izaberite zeljenu operaciju ponovo!\n";
    }while(izaberiOperaciju < 1 || izaberiOperaciju > 7);
    return izaberiOperaciju;
}

int main()
{
    ///konstruktori klase GornjiDelovi
    GornjiDelovi G;
    GornjiDelovi G1(ZENSKI, HALJINA, KRATKI, M, PROLECE, "Kratka haljina sa V-izrezom,cvetnim motivom,uskim naramenicama i dugmicima na prednjoj strani.", 1200.00, CRVENA, NOVI, SVILA, "FBsister", INDONEZIJA, "0811471005", true);
    GornjiDelovi G2(G);

    ///konstruktori klase DonjiDelovi
    DonjiDelovi D;
    DonjiDelovi D1(ZENSKI, FARMERICE, 28, "Farmerice sa pet dzepova,ekstra visokim strukom i ne�no zategnutim nogavicama sa sivim rubom.", 3200.00, PLAVA, NOVI, TEKSAS, "LCWaikiki", BANGLADES, "0572998001", false);
    DonjiDelovi D2(D);

    ///konstruktori klase Obucica
    Obucica O;
    Obucica O1( ZENSKI, STIKLE, 39, BEZ, 0.2, "Satirane sa stiklom od 5cm", 2800.00, CRVENA, LASTSEASON, PLATNO, "OhLaLa", TURSKA, "0662923085", true);
    Obucica O2(O);

    ///konstruktori klase Aksesoari
    Aksesoaric A;
    Aksesoaric A1(ZENSKI, LETO, NAOCARE, 15.00, 15.00, 5.00, "Naocare za sunce sa crnim staklima", 2800.00, ZELENA, NOVI, PLASTIKA, "Gucci", SRBIJA, "8960123775", false);
    Aksesoaric A2(A);

    ///konstruktori klase Ulica
    Ulica U;
    Ulica U1("Okrugiceva", 16);
    Ulica U2(U);

    ///konstruktori klase Mesto
    Mesto M;
    Mesto M1("Okrugiceva", 16, "Novi Sad");
    Mesto M2(M);

    ///konstruktori klase Kartica
    Kartica K;
    Kartica K1("123456789", "1234", 1000000.00);
    Kartica K2(K);

    ///konstruktori klase Osoba
    Osoba Ob;
    Osoba Ob1("Iva", "Bojanic", "blabla@gmail.com", "+381669249686", "Okrugiceva", 16, "Novi Sad");
    Osoba Ob2(Ob);

    ///konstruktori klase Kupac
    Kupac Ku;
    Kupac Ku1("123456789","1234", 10000.00);
    Kupac Ku2(Ku);

    ///konstruktori klase Poslodavac
    Poslodavac P;
    Poslodavac P1("Sinsay");
    Poslodavac P2(P);

    ///konstruktori klase Isporuka
    Isporuka I;
    Isporuka I1("04.05.2020.", "Pezoposta", 1400.00);
    Isporuka I2(I);

    ///konstruktori klase CallCentar
    CallCentar C;
    CallCentar C1("Okrugiceva", 16, "Novi Sad", "+381669249686");
    CallCentar C2(C);

    ///proba dodavanja mesta u listu
    SvaMestaProdavnica mestasce;
    mestasce+=M;
    mestasce+=M1;

    mestasce.ispisSvihMesta();

    ///proba ispisa zeljenog dela prodavnice
    Prodavnica prodavnica;
    prodavnica.setDeo(ODECA);
    prodavnica.setPol(MUSKI);
    prodavnica.setVrsta(GORNJI);

    Korpa korpica;
    korpica+=G1;
    korpica+=D1;
    korpica+=O1;
    korpica+=A1;

    int operacija;
    cout<<"---------------------------------"<<endl;
    cout<<"\tDOBRODOSLI U PRODAVNICU"<<endl;
    cout<<"---------------------------------"<<endl;
    do{
        operacija = meni();
        switch(operacija)
        {
        case 1:
            G.ispis();
            G1.ispis();
            G2.ispis();

            D.ispis();
            D1.ispis();
            D2.ispis();

            O.ispis();
            O1.ispis();
            O2.ispis();

            A.ispis();
            A1.ispis();
            A2.ispis();

            U.ispisUlice();
            U1.ispisUlice();
            U2.ispisUlice();

            M.ispisMesta();
            M1.ispisMesta();
            M2.ispisMesta();

            K.ispisKartice();
            K1.ispisKartice();
            K2.ispisKartice();

            Ob.ispis();
            Ob1.ispis();
            Ob2.ispis();

            Ku.ispisKupca();
            Ku1.ispisKupca();
            Ku2.ispisKupca();

            P.ispisPoslodavca();
            P1.ispisPoslodavca();
            P2.ispisPoslodavca();

            I.ispisIsporuke();
            I1.ispisIsporuke();
            I2.ispisIsporuke();

            C.ispisCallCentra();
            C1.ispisCallCentra();
            C2.ispisCallCentra();
            break;
        case 2:
            mestasce.ispisSvihMesta();
            break;
        case 3:
            prodavnica.ispisiZeljeniDeoProdavnice(prodavnica.getDeo(),prodavnica.getPol(),prodavnica.getVrsta());
            break;
        case 4:
            korpica.ispisKorpe();
            break;
        case 5:
            cout<<prodavnica.getUkupnaCena();
            break;
        case 6:
            prodavnica.KupovinaProizvodaIzKorpe(Ku1,I1);
            break;
        case 7:
            exit(0);
        }
    }while(operacija<7);

    return 0;
}
