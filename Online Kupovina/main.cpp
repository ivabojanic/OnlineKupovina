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
    do
    {
        cout<<"\nIzaberite zeljenu operaciju:\n";
        cout<<" 1. Ispitivanje rada svih konstruktora(prazan,sa parametrima,kopije)"<<endl;
        cout<<" 2. Proba ispisa proizvoda prodavnice"<<endl;
        cout<<" 3. Proba ispisa liste mesta prodavnica"<<endl;
        cout<<" 4. Proba ispisa korpe"<<endl;
        cout<<" 5. Proba ispisa konacnog racuna"<<endl;
        cout<<" 6. Proba porudzbine"<<endl;
        cout<<" 7. Proba ispisa informacija o prodavnici"<<endl;
        cout<<" 8. Proba operatora dodele"<<endl;
        cout<<" 9. KRAJ RADA PROGRAMA";
        cout<<"\n>>>";
        cin>>izaberiOperaciju;
        if(izaberiOperaciju < 1 || izaberiOperaciju > 9)
            cout<<"\nOpcija van opsega (1-6)! Izaberite zeljenu operaciju ponovo!\n";
    }
    while(izaberiOperaciju < 1 || izaberiOperaciju > 9);
    return izaberiOperaciju;
}

int main()
{
    ///konstruktori klase GornjiDelovi
    GornjiDelovi G;
    GornjiDelovi G1(ZENSKI, HALJINA, KRATKI, M, LETO, "Kratka haljina sa V-izrezom,cvetnim motivom,uskim naramenicama i dugmicima na prednjoj strani.", 790.00, ZELENA, NOVI, SVILA, "FBsister", FRANCUSKA, "0811478889", true);
    GornjiDelovi G2(G);

    ///konstruktori klase DonjiDelovi
    DonjiDelovi D;
    DonjiDelovi D1(ZENSKI, SORC, 20, "Sorc sa pet dzepova i ekstra visokim strukom ", 2990.00, PLAVA, LASTSEASON, TEKSAS, "LCWaikiki", KINA, "0500908001", true);
    DonjiDelovi D2(D);

    ///konstruktori klase Obucica
    Obucica O;
    Obucica O1( ZENSKI, PATIKE, 40, PERTLE, 2.0, "Starke old school", 4500.00, ZUTA, NOVI, PLATNO, "AllStar", SAD , "06629234331", true);
    Obucica O2(O);

    ///konstruktori klase Aksesoari
    Aksesoaric A;
    Aksesoaric A1(MUSKI, LETO, NAOCARE, 15.00, 15.00, 5.00, "Naocare za sunce sa crnim staklima", 2800.00, ZELENA, NOVI, PLASTIKA, "Gucci", SRBIJA, "8960123775", false);
    Aksesoaric A2(A);

    ///konstruktori klase Ulica
    Ulica U;
    Ulica U1("Okrugiceva", 16);
    Ulica U2(U);

    ///konstruktori klase Mesto
    Mesto M;
    Mesto M1("Preradoviceva", 70, "Petrovaradin");
    Mesto M2(M);

    ///konstruktori klase Kartica
    Kartica K;
    Kartica K1("123456789", "1234", 10000.00);
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

    Prodavnica prodavnica;

    ///dodavanje u kropu
    prodavnica.dodajGUKorpu(G1);
    prodavnica.dodajDUKorpu(D1);
    prodavnica.dodajOUKorpu(O1);

    ///dodavanje u prodavnicu

    prodavnica.dodajUProdavnicuAksesoar(A1);
    prodavnica.dodajUProdavnicuGornji(G1);
    prodavnica.dodajUProdavnicuGornji(G);

    informacijeOProdavnici Info;

    int operacija;
    cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t  DOBRODOSLI U IVINU PRODAVNICU"<<endl;
    cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
    do
    {
        operacija = meni();
        switch(operacija)
        {
        case 1:
            cout<<endl;
            cout<<"--> KONTSTUKTORI ZA GORNJE DELOVE <--"<<endl;
            cout<<endl;
            cout<<G;
            cout<<G1;
            cout<<G2;
            cout<<endl;
            cout<<"--> KONTSTUKTORI ZA DONJE DELOVE <--"<<endl;
            cout<<endl;
            cout<<D;
            cout<<D1;
            cout<<D2;
            cout<<endl;
            cout<<"--> KONTSTUKTORI ZA OBUCU <--"<<endl;
            cout<<endl;
            cout<<O;
            cout<<O1;
            cout<<O2;
            cout<<endl;
            cout<<"--> KONTSTUKTORI ZA AKSESOAR <--"<<endl;
            cout<<endl;
            cout<<A;
            cout<<A1;
            cout<<A2;
            cout<<endl;
            cout<<"--> KONTSTUKTORI ZA ULICU <--"<<endl;
            cout<<endl;
            U.ispisUlice();
            U1.ispisUlice();
            U2.ispisUlice();
            cout<<endl;
            cout<<"--> KONTSTUKTORI ZA MESTO <--"<<endl;
            cout<<endl;
            M.ispisMesta();
            M1.ispisMesta();
            M2.ispisMesta();
            cout<<endl;
            cout<<"--> KONTSTUKTORI ZA KARTICU <--"<<endl;
            cout<<endl;
            K.ispisKartice();
            K1.ispisKartice();
            K2.ispisKartice();
            cout<<endl;
            cout<<"--> KONTSTUKTORI ZA OSOBU <--"<<endl;
            cout<<endl;
            Ob.ispis();
            Ob1.ispis();
            Ob2.ispis();
            cout<<endl;
            cout<<"--> KONTSTUKTORI ZA KUPCA <--"<<endl;
            cout<<endl;
            Ku.ispisKupca();
            Ku1.ispisKupca();
            Ku2.ispisKupca();
            cout<<endl;
            cout<<"--> KONTSTUKTORI ZA POSLODAVCA <--"<<endl;
            cout<<endl;
            cout<<P;
            cout<<P1;
            cout<<P2;
            cout<<endl;
            cout<<"--> KONTSTUKTORI ZA ISPORUKU <--"<<endl;
            cout<<endl;
            I.ispisIsporuke();
            I1.ispisIsporuke();
            I2.ispisIsporuke();
            cout<<endl;
            cout<<"--> KONTSTUKTORI ZA CALLCENTAR <--"<<endl;
            cout<<endl;
            C.ispisCallCentra();
            C1.ispisCallCentra();
            C2.ispisCallCentra();
            break;
        case 2:
            prodavnica.ispisProizvodaProdavnice();
            break;
        case 3:
            mestasce.ispisSvihMesta();
            break;
        case 4:
            prodavnica.ispisCeleKorpe();
            break;
        case 5:
            cout<<prodavnica.getUkupnaCena()<<" dinara";
            break;
        case 6:
            prodavnica.KupovinaProizvodaIzKorpe(Ku1,I1);
            break;
        case 7:
            Info.ispisInformacija(mestasce,P1,C1);
            break;
        case 8:
            cout<<G;
            G=G1;
            cout<<G;
            cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
            cout<<O;
            O=O1;
            cout<<O;
        case 9:
            exit(0);
        }
    }
    while(operacija<9);

    return 0;
}
